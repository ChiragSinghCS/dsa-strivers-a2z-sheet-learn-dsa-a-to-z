#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

class Solution {
public:
  int NthRoot(int N, int M) {
    for(int i = 0; i < M; i++){
        long long power = pow(i,N);
        if(power == M){
            return i;
        }
        else if(power > M){
            return -1;
        }
    }
  }
};
