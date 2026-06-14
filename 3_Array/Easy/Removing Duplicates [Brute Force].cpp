#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
class Solution{
    public:
        bool remove_duplicate(vector<int> nums){
            int n = nums.size();
            int index = 0;
            unordered_set<int> seen;
            for(auto num: nums){
                if(seen.find(num) != seen.end()){ // DOubt != to be replaced by =
                    seen.insert(num);
                    nums[index]=num;
                    index++;
                }
            }
        }
};