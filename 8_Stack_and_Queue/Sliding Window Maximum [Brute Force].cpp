#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution{
public:
    vector<int> maxSlidingWindow(vector<int> &arr, int k) {
        int n = arr.size();
        vector<int> ans;
        for(int i =0;i<=n-k; i++){
            int maxi = INT_MIN;
            for(int j = i; j<i+k; j++){
                maxi = max(maxi, arr[j]);
            }
            ans.emplace_back(maxi);
        }
        return ans;
    }
};