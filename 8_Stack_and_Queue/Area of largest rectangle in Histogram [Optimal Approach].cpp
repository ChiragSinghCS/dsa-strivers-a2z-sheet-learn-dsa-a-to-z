#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution
{
public:
    int largestRectangleArea(vector<int> &heights) {
        int n = heights.size();
        int maxRectArea = 0;
        stack<int> st;
        vector<int> minL(n);
        vector<int> minR(n);
        for(int i =0;i<n; i++){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(!st.empty()){
                minL[i] = st.top()+1;
            }
            else{
                minL[i] = 0;
            }
            st.push(i);
        }
        while(!st.empty()){
            st.pop();
        }
        for(int i =n-1; i>=0; i--){
            while(!st.empty() && heights[st.top()] >= heights[i]){
                st.pop();
            }
            if(!st.empty()){
                minR[i] = st.top()-1;
            }
            else{
                minR[i] = n-1;
            }
            st.push(i);
        }
        int maxArea = INT_MIN;
        for(int i = 0; i<n; i++){
            int width = minR[i] - minL[i] + 1;
            int area = width*heights[i];
            maxArea = max(maxArea, area);
        }
        return maxArea;
    }
};