#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int search(vector<int> &nums, int k) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low <= high){
            int mid = (high+low)/2;
            if(k==nums[mid]){
                return mid;
            }
            //checking if left half sorted
            else if(nums[low]<=nums[mid]){ 
                if(k>=nums[low] && k < nums[mid]){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            //and if right half sorted
            else{
                if(k>nums[mid] && k<=nums[high]){
                    low = mid + 1;
                }
                else{
                    high = mid - 1;
                }
            }
        }
        return -1;
    }
};
