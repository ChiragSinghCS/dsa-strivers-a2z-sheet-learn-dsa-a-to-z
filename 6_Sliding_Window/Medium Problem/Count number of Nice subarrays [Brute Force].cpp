#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        int nicearr = 0;
        for(int i =0; i<n; i++){
            int countodd = 0;
            for(int j =i; j<n; j++){
                if(nums[j]%2 != 0){
                    countodd++;
                }
                if(countodd == k){
                    nicearr++;
                }
                else if(countodd > k){
                    break;
                }
            }
        }
        return nicearr;   
    }
};