#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> nextLargerElement(vector<int> arr) {
        int n = arr.size();
        stack<int> st;
        int push = 0;
        for(int j = n-1; j>=0; j--){
            if(j==n-1){
                st.push(arr[j]);
                arr[j] = -1;
                continue;
            }
            while(!st.empty() && arr[j]>=st.top()){
                st.pop();
            }
            if(!st.empty()){
                push= arr[j];
                arr[j]=st.top();
                st.push(push);
            }
            else{
                push = arr[j];
                arr[j]=-1;
                st.push(push);
            }
        }
    }
};