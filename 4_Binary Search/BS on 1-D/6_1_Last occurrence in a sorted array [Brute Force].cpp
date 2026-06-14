#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> searchRange(vector<int> &nums, int target) {
        int n = nums.size();
        int last = -1;
        int first = -1;
        int count = 0;
        for(int i = 0; i<n; i++){
            if(nums[i]==target && count==0){
                first = i;
            }
            if(nums[i]==target){
                last = i;
                count++;
            }

        }
        return {first,last};
    }
};