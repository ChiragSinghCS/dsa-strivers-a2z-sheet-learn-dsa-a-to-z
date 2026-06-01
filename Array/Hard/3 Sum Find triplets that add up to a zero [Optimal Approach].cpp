#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        int left;
        int right = n-1;
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for(int i = 0; i<n; i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            else
            {
                left = i+1;
                right  = n-1;
            }
            while(left<right){
                int target = nums[i]+nums[left]+nums[right];
                if(target>0){
                    right--;
                }
                else if (target<0)
                {
                    left++;
                }
                else{
                    result.push_back({nums[i], nums[left], nums[right]});
                    right--;
                    left++;
                    while (left < right && nums[left] == nums[left - 1]) left++;
                    while (left < right && nums[right] == nums[right + 1]) right--;

                }
            }
        }
        return result;
    }
};

int main(){
    Solution s;
}