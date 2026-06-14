#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        int n = arr.size();
        int sum;
        int max_length = 0;
        unordered_map<int,int> mp;
        for(int i = 0; i<n; i++){
            sum+=arr[i];
            mp[sum]=i;
            if(sum==0){
                max_length++;
            }
            else if(mp.find(sum)!=mp.end()){
                max_length=max(max_length, i-mp[sum]);
            }
            else{
                mp[sum]=i;
            }
        }
    }
};