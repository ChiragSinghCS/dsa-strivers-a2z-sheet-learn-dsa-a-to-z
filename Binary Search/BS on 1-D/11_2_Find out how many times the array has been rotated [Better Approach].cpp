#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findKRotation(vector<int> &nums)  {
        int n = nums.size();
        for(int i = 0; i<n-1; i++){
            if(nums[i]<nums[i+1]){
                return i+1;
            }
        }
        return 0;
    }
};