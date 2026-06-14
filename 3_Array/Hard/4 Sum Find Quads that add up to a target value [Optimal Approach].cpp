#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        int left, right;
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i = 0; i < n; i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            else{
                for(int j = i+1; j < n; j++){
                    if(j>i+1 && nums[j]==nums[j-1]){
                        continue;
                    }
                    else{
                        left = j+1;
                        right = n-1;
                        while(left<right){
                            long long sum=(long long)nums[i]+nums[j]+nums[left]+nums[right];
                            if(sum>target){
                                right--;
                            }
                            else if(sum<target){
                                left++;
                            }
                            if(sum==target){
                                result.push_back({nums[i],nums[j],nums[left],nums[right]});
                                right--;
                                left++;
                                while(left<right && nums[left]==nums[left-1]) left++;
                                while(left<right && nums[right]==nums[right+1]) right--;
                            }
                        }
                    }
                }
            }
        }
        return result;
    }
};