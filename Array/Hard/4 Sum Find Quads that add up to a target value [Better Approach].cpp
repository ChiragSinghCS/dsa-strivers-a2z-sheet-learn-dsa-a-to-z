#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> result;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                unordered_set<long long> seen;
                for(int k = j+1; k<n; k++){
                    long long req = (long long)target - nums[i]-nums[j]-nums[k];
                    if(seen.count(req)){
                        vector<int> temp = {nums[i],nums[j],nums[k],(int)req};
                        sort(temp.begin(),temp.end());
                        result.insert(temp);
                    }
                    seen.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> ans(result.begin(),result.end());
        return ans;
    }
};