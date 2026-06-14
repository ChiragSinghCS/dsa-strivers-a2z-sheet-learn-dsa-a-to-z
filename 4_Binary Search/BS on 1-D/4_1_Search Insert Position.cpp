#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int> &nums, int target)  {
       int n = nums.size();
       int ans;
       int low = 0;
       int high = n-1;
       while(low <= high){
            int mid = (low+high)/2;
            if(target>nums[mid]){
                low = mid+1;
            }
            else if(target<=nums[mid]){
                high = mid - 1;
                ans = mid;
            }
       }
       return ans;
    }
};