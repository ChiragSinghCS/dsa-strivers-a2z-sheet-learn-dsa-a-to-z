#include<iostream>
#include<stack>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n =  nums2.size();
        unordered_map<int,int> mp;
        stack<int> st;
        for(int i =n-1; i>=0; i--){
            int curr = nums2[i];
            while(!st.empty() && st.top()<=curr){
                st.pop();
            }
            if(!st.empty()){
                mp[curr]=st.top();
            }
            else{
                mp[curr]=-1;
            }
            st.push(curr);
        }
        vector<int> ans;
        for(int j =0; j<nums1.size(); j++){
            ans.emplace_back(mp[nums1[j]]);
        }
        return ans;
    }
};