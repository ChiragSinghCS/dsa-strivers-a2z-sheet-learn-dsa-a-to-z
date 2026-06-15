#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

class Solution {
public:
  int NthRoot(int N, int M) {
    int low = 0;
    int high = M;
    while(low <= high){
      int mid = low + (high-low)/2;
      long long ans = 1;
      for (int i = 0; i < N; i++) {
        ans *= mid;
        if (ans > M) break;
      }
      if(ans == M){
        return mid;
      }
      else if(ans > M){
        high = mid -1;
      }
      else{
        low  = mid + 1;
      }
    }
    return -1;
  }
};