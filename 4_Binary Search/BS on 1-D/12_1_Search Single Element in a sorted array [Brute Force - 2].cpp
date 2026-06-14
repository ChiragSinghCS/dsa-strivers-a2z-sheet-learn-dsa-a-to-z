#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        int n = nums.size();
        for(int i = 0; i<n-1; i++){
            if (i == 0) {
                if (nums[i] != nums[i + 1])
                    return nums[i];
            }
            else if (i == n - 1) {
                if (nums[i] != nums[i - 1])
                    return nums[i];
            }
            else {
                if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
                    return nums[i];
            }
        }
    }
};