#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count1 = 0, count2 = 0;
        int element1= INT_MIN, element2= INT_MIN;
        vector<int> result;
        for(int i = 0; i <n; i++){
            if(count1==0 && nums[i]!=element2){
                count1++;
                element1 = nums[i];
            }
            else if(count2==0 && nums[i]!=element1){
                count2++;
                element2 = nums[i];
            }
            else if(nums[i]==element1){
                count1++;
            }
            else if(nums[i]==element2){
                count2++;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1=0,count2 =0;
        for(int i =0; i<n; i++){
            if(nums[i]==element1){
                count1++;
            }
            else if(nums[i]==element2){
                count2++;
            }
        } 
        if(count1>int(n/3)){
            result.push_back(element1);
        }
        if(count2>int(n/3)){
            result.push_back(element2);
        }
        return result;
    }
};