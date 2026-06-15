#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int floorSqrt(int n)  {
        for(int i = 0; i <= n; i++){
            if(i*i >n){
                return i-1;
            }
            if(i*i == n){
                return i;
            }
        }
    }
};