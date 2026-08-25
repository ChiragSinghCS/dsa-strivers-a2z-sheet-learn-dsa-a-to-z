#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int atMost(vector<int>& nums, int k) {
        int n = nums.size();
        int totalSubarrays = 0;
        int i = 0;
        int j = n;
        int oddcount = 0;
        for(int j = 0; j <n; j++){
            if(nums[j]%2 != 0){
                oddcount++;
            }
            while(oddcount > k){
                if(nums[i]%2 != 0){
                    oddcount--;
                }
                i++;
            }
            totalSubarrays += j-i+1;
        }
        return totalSubarrays;   
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k-1);
    }
};