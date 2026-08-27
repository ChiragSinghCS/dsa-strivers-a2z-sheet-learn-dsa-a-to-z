#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> nextLargerElement(vector<int> arr) {
        int n = arr.size();
        for(int i =0; i<n; i++){
            if(i == n-1){
                arr[n-1] = -1;
                break;
            }
            for(int j=i+1; j<n; j++){
                if(arr[i]<arr[j]){
                    arr[i]=arr[j];
                    break;
                }
                if(j==n-1){
                    arr[i] = -1;
                }
            }
        }
        return arr;
    }
};