#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> result;
        int n = nums.size();
        unordered_map<int,int> hash;
        for(int i = 0; i < n; i++){
            hash[nums[i]]++;
        }
        for(auto it: hash){
            if(it.second > ((n)/3)){
                result.push_back(it.first);
            }
        }
        return result;
    }
};