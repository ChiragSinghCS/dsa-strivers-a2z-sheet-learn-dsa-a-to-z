#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int n = nums.size();
        int mini = 0;
        for(int i = 1; i<n; i++){
            if(nums[i]<nums[mini]){
                mini = i;
            }
        }
        return mini;
    }
};