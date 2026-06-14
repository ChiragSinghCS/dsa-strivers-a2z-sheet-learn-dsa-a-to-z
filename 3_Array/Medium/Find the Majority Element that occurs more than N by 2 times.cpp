#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count = 0;
        int current = nums[0];
        for(int i =0; i<n; i++){
            if(count ==0){
                current = nums[i];
                count++;
            }
            else if(count==1 && nums[i]!=current){
                current = nums[i];
            }
            else if(nums[i]==current){
                count++;
            }
            else if(nums[i]!=current){
                count--;
            }
        }
        return current;
    }
};