#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int n = nums.size();
        int ans = n;
        int high = n-1;
        int low = 0;
        int mid = (high + low)/2;
        // binary serach loop
        while(low>=high){
            if(nums[mid]>=x){
                ans = x;
                high = mid -1;
            }
            else if(nums[mid]<x){
                high = mid + 1;
            }
        }
        return ans;
    }
};