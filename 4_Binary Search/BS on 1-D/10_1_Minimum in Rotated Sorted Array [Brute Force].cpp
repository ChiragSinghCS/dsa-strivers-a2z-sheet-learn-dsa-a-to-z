#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int findMin(vector<int> &arr)  {
        int n = arr.size();
        int mini = INT_MAX;
        for(int i = 0; i < n; i++){
            mini = min(arr[i],mini);
        }      
        return mini;
    }
};