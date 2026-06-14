#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int p=0;
        int n1=1;
        vector<int> num(n,0);
        for(int i=0; i<n; i++){
            if(nums[i]>0){
                num[p]=nums[i];
                p=p+2;
            }
            else{
                num[n1]=nums[i];
                n1=n1+2;
            }
        }   
        return num;
    }
};
