#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    long long int numberOfInversions(vector<int> nums) {
        int n = nums.size();
        return mergeSort(nums,0,n-1);
    }
    long long int merge(vector<int>&arr, int low, int mid, int high){
        int left = low;
        int right = mid+1;
        vector<int> temp;
        long long int count = 0;

        while(left<=mid && right<=high){
            if(arr[left]>arr[right]){
                temp.push_back(arr[right++]);
                count += (mid-left+1);
            }
            else if(arr[left]<=arr[right]){
                temp.push_back(arr[left++]);
            }
        }
        while(left<=mid){
            temp.push_back(arr[left++]);
        }
        while(right<=high){
            temp.push_back(arr[right++]);
        }
        for(int i = low; i<=high; i++){
            arr[i]=temp[i-low];
        }
        return count;
    }
    long long int mergeSort(vector<int>&arr, int low, int high){
        long long int count = 0;
        if(low>=high){
            return count;
        }
        int mid = (high+low)/2;
        count += mergeSort(arr, low, mid);
        count += mergeSort(arr, mid+1, high);
        count += merge(arr, low, mid, high);
        return count;
    }
};