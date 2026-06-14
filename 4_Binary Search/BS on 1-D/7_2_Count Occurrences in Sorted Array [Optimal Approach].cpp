#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int countOccurrences(vector<int>& arr, int target) {
        return {lastOcc(arr, target)-firstOcc(arr, target)+1};
    }
    int firstOcc(vector<int> &arr, int target){
        int n = arr.size();
        int first = -1;
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (high+low)/2;
            if(target == arr[mid]){
                first = mid;
                high = mid-1;
            }
            else if(target > arr[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return first;
    }
    int lastOcc(vector<int> &arr, int target){
        int n = arr.size();
        int last = -1;
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (high+low)/2;
            if(target == arr[mid]){
                last = mid;
                low = mid+1;
            }
            else if(target > arr[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return last;
    }
};