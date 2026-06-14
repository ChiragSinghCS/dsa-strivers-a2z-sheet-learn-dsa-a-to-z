#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int subarraysWithXorK(vector<int> &nums, int k) {
        int n = nums.size();
        int count = 0;
        for(int i = 0; i<n; i++){
            int xorV = 0;
            for(int j=i; j<n; j++){
                xorV = xorV ^ nums[j];
                if(xorV==k){
                    count++;
                }
            }
        }
        return count;
    }
};