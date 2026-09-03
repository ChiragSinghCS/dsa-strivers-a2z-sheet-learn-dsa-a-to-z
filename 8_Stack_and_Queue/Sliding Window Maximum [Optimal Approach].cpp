#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution{
public:

    vector<int> maxSlidingWindow(vector<int> &arr, int k) {
        int n = arr.size();
        deque<int> dq;
        vector<int> ans;
        for(int i =0; i<n; i++){
            if(!dq.empty() && dq.front()<=i-k){
                dq.pop_front();
            }

            while(!dq.empty() && arr[dq.back()]<arr[i]){
                dq.pop_back();
            }

            dq.push_back(i);

            if(i>=k-1){
                ans.emplace_back(arr[dq.front()]);
            }
        }
        return ans;
    }
};