#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int count = 0;
            for(int j = 0; j < n; j++){
                if(nums[i]==nums[j]){
                    count++;
                }
                if(count == 2){
                    return nums[i];
                }
            }
        }
        return -1;
    }
};