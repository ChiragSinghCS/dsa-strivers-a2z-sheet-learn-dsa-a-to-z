#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution
{
public:
    int trap(vector<int> &height){
        int n = height.size();

        if(n==0) return 0;

        vector<int> maxL (n);
        vector<int> maxR (n);

        int ans = 0;

        maxL[0] = height[0];
        for(int i =1; i<n; i++){
            maxL[i] = max(maxL[i-1], height[i]);
        }

        maxR[n-1] = height[n-1];
        for(int j = n-2; j>=0; j--){
            maxR[j] = max(height[j], maxR[j+1]);
        }

        for(int i =0; i<n; i++){
            int waterlevel = min(maxL[i], maxR[i]);
            ans += waterlevel-height[i];
        }
        return ans;
    }
};