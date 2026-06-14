#include<iostream>
#include<algorithm>
#include<vector>
#include<set>

using namespace std;

class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        int rows = arr.size();
        int column = arr[0].size();
        vector<vector<int>> result;
        sort(arr.begin(),arr.end());
        for(int i=0; i <rows; i++){
            if(result.empty() || arr[i][0]>result.back()[1]){
                result.push_back(arr[i]);
            }
            else{
                result.back()[1]=max(arr[i][1],result.back()[1]);
            }
        }
        return result;    
    }
};
