#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int lowerBound(vector<int> &nums, int x){
        int n = nums.size();
        for(int i = 0; i<n; i++){
            if(nums[i]==x || nums[i]>=x){
                return i;
            }
        }
        return n;
    }
};