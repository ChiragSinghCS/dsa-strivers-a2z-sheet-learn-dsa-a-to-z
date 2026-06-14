#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        int n = nums.size();
        vector<int> miss(2);
        unordered_map<int,int> mpp;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        for(auto num: mpp){
            if(num.second==2){
                miss[0]=num.first;
                break;
            }
        }
        for(int i=1; i<=n; i++){
            if(mpp[i]==0){
                miss[1]=i;
            }
        }
        return miss;
    }
};