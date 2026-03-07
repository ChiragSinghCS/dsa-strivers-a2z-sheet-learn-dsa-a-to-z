#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution{
    public:
        int solve(vector<int> a){
            int n = a.size();
            unordered_map<int, int> sumIndexMap;
            int maxLen = 0;
            int sum = 0;
            for(int i=0; i<n; i++){
                sum = sum + a[i];
                if(sum==0){
                    maxLen = i+1;
                }
                else if(sumIndexMap.find(sum)!=sumIndexMap.end()){
                    maxLen = max(maxLen, i-sumIndexMap[sum]);
                }
                else{
                    sumIndexMap[sum] = i;
                }
            }
            return maxLen;
        }
};
