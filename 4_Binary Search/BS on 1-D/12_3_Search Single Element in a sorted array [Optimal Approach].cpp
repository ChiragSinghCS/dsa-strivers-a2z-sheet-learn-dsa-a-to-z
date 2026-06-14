#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int> &nums) {
        int n = nums.size();
        int low = 0;
        int high = n-1;
        while(low<high){
            int mid = low + (high - low)/2;
            // Agar mid ek Even (sam) number hai, toh mid ^ 1 ban jata hai mid + 1
            if(mid%2 == 0){
                if(nums[mid]==nums[mid+1]){
                    low = mid + 1;
                }
                else{
                    high = mid;
                }
            }
            else{
                if(nums[mid]==nums[mid-1]){
                    low = mid + 1;
                }
                else{
                    high = mid;
                }
            }
        }
        return nums[low];
    }
};