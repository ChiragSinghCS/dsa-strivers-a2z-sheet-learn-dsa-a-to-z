#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> positive;
        vector<int> negative;
        for(int i=0; i<n; i++){
            if(nums[i]<0){
                negative.push_back(nums[i]);
            }
            else{
                positive.push_back(nums[i]);
            }
        }   
    }
};
int main(){
    vector<int> prices={7,1,5,3,6,4};
    Solution s;
    cout << s.rearrangeArray(prices);
}