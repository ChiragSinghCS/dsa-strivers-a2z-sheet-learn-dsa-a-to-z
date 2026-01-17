#include <vector>
#include <unordered_map>
class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x: nums){
            mp[x]++;
        }
        vector<vector<int>>ans;
        for(int a: ans){
            ans.push_back({a.first, a.second});
        }
        return ans;
    }
};