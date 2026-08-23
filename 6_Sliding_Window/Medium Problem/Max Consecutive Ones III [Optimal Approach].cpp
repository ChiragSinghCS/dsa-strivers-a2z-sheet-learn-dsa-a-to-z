#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int maxlen = 0;
        for(int i =0; i<nums.size(); i++){
            int zerocount = 0;
            int len = 0;
            for(int j = i; j < nums.size(); j++){
                if(nums[j]==0 ){
                    zerocount++;
                }
                if(zerocount > k){
                    break;
                }
                len++;
                maxlen = max(maxlen, len);
            }
        }
        return maxlen;
    }
};