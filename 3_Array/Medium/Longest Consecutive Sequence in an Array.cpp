#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        set<int> s;
        int x;
        int count=0;
        vector<int> temp;
        for(int i=0;i <n; i++){
            s.insert(nums[i]);
        }
        for(auto num: s){
            if(s.find(num-1)!=s.end()){
                continue;
            }
            else{
                temp.emplace_back(num);   
            }
        }
        for(int i=0;i<temp.size();i++){
            x= temp[i];
            count=1;
            if(s.find(temp[i]+1)!=s.end()){
                count++;
            }
        }
        return count;
    }
};