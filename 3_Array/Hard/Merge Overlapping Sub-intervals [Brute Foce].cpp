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
        sort(arr.begin(),arr.end());
        for(int i=1; i <rows; i++){
            if(arr[i][0]<=arr[i-1][column-1]){
                arr[i-1][column-1]=max(arr[i-1][column-1],arr[i][column-1]);
                arr.erase(arr.begin()+i);
                i=i-1;
                rows=rows-1;
            }
        }
        return arr;    
    }
};
