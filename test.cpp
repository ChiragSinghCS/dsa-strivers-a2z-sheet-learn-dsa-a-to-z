#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int break_point=-1;
        int dist;
        int old_dist= INT_MAX;
        int to_swap;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                i = break_point;
                break;
            }
        }
        for(int i=break_point+1;i<n;i++){
            if(nums[break_point]<nums[i]){
                dist = nums[i]-nums[break_point];
                if(dist==min(dist,old_dist)){
                    old_dist=dist;
                    to_swap=i;
                };
            }
        }
        swap(nums[to_swap],nums[break_point]);

        


    }
};
int main(){
    vector<int> prices={7,1,5,3,6,4};
    Solution s;
    cout << s.rearrangeArray(prices);
}