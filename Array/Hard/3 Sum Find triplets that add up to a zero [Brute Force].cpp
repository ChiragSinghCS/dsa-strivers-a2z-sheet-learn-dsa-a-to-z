#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> result;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                for(int k =  j+1; k<n; k++){
                    if(nums[i]+nums[j]+nums[k]==0){
                        result.push_back({nums[i], nums[j], nums[k]});
                    }
                }
            }
        }
        return result;
    }
};

int main(){
    Solution s;
}