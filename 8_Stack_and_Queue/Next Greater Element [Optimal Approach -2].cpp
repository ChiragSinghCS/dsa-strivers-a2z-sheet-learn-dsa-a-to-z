#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> nextLargerElement(vector<int> arr) {
        int n = arr.size();
        stack<int> st;
        
        for(int j = n - 1; j >= 0; j--) {
            int curr = arr[j]; 
            
            while(!st.empty() && st.top() <= curr) {
                st.pop();
            }
            
            if(st.empty()) {
                arr[j] = -1;
            } 
            else {
                arr[j] = st.top();
            }
            
            st.push(curr);
        }
        return arr;
    }
};