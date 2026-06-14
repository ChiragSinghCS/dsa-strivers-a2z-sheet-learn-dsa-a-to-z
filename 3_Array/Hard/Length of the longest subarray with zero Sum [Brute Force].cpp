#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    int maxLen(vector<int>& arr) {
        int n = arr.size();
        int sum;
        int max_length = 0;
        for(int i = 0; i<n; i++){
            sum = arr[i];
            for(int j=i+1; j<n; j++){
                sum +=arr[j];
                if(sum==0){
                    max_length = max(max_length, j-i+1);
                }
            }
        }
        return max_length;
    }
};