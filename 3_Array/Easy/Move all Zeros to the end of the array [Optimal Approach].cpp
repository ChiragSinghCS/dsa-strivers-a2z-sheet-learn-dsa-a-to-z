#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
        void moveZeroes(vector<int>& nums){
            int j = -1;
            for(int i=0; i<nums.size(); i++){
                //Finding first zero
                if(nums[i]==0){
                    j = i;
                    break;
                }
            }

            if(j==-1) return; //if no zero found
            
            //Swapping zero with next non zero
            for(int i=j+1; i<nums.size();i++){
                if (nums[i]!=0){
                    swap(nums[j],nums[i]);
                    j++;
                }
            }
        }
};