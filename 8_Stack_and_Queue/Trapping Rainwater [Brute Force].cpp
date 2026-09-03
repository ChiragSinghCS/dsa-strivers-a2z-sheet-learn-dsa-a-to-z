#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height){
        int n = height.size();
        int maxL = 0;
        int minboth = 0;
        int ans = 0;
        for(int i = 0; i <n; i++){
            int maxR = 0;
            
            if(i ==0 || i==n-1){
                continue;
            }
            for(int j = i+1; j<n; j++){
                maxR = max(maxR, height[j]);
            }

            maxL = max(maxL, height[i-1]);
            minboth = min(maxL, maxR);
            if(minboth>height[i]){
                ans += minboth-height[i];
            }

        }
        return ans;
    }
};