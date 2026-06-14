#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int upperBound(vector<int> &nums, int x){
        int n = nums.size();
        int ans = n;
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (high + low)/2;
            if(nums[mid]>x){
                ans = mid;
                high = mid -1;
            }
            else if(nums[mid]<=x){
                low = mid+1;
            }
        }
        return ans;
    }
};