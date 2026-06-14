#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n= nums.size();
        int max_sum=nums[0];
        int sum=0;
        for(int i=0; i<n;i++){
            sum=sum+nums[i];
            if(max_sum<sum){
                max_sum=sum;
            }
            if(sum<0){
                sum=0;
            }
        }
        return max_sum;   
    }
};