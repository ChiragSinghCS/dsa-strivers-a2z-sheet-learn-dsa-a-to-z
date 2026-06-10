#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int max_product = nums[0];
        for(int i =0; i<n; i++){
            int prod = nums[i];
            for(int j =i; j<n; j++){
                prod*= nums[j];
                max_product = max(prod,max_product);
            }
        }        
        return max_product;
    }
};