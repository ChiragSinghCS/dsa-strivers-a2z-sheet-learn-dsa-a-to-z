#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
        int longestSubarray(vector<int> &nums, int k){
            int MaxSubArrayLen = 0;
            int n = nums.size();
            int left = 0, right = 0;
            int sum = nums[0];
            while(right<n){
                while(left<=right && sum>k){
                    sum = sum - nums[left];
                    left++;
                }
                if(sum==k){
                    MaxSubArrayLen = max(MaxSubArrayLen, right-left+1);
                }
                right++;
                if(right<n){
                    sum = sum + nums[right];
                }
            }
            return MaxSubArrayLen;
        }
};