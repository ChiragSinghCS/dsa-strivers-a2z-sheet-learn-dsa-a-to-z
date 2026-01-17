#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int largestElement(vector<int>& nums) {
        int n = nums.size();
        int max  = 0;
        for(int i =1;i<n;i++){
            if(nums[max]<nums[i]){
                max = i;
            }
        }
        return nums[max];
    }
};