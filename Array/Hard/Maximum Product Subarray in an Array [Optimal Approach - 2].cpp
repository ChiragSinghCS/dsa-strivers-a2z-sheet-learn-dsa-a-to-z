#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int result = nums[0];
        int maxProd = nums[0];
        int minProd = nums[0];
        for(int i = 1; i<n; i++){
            int current = nums[i];
            if(current<0){
                swap(maxProd,minProd);
            }
            maxProd = max(current, maxProd*current);
            minProd = min(current, minProd*current);

            result = max(result, maxProd);
        }
        return result;
    }
};