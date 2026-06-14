#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
        int longestSubarray(vector<int> &nums, int k){
            int n = nums.size();
            int MaxSubArrayLen = 0;
            for(int startIndex = 0; startIndex<n; startIndex++){
                for(int endIndex = startIndex; endIndex<n; endIndex++){
                    int sum = 0;
                    for(int i=startIndex; i<=endIndex; i++){
                        sum = sum + nums[i];
                    }
                    if(sum==k){
                        MaxSubArrayLen = max(MaxSubArrayLen, endIndex-startIndex+1);
                    }
                }
            }
            return MaxSubArrayLen;
        }
};