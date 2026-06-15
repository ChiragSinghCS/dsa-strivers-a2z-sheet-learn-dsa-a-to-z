#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int floorSqrt(int n)  {
        if(n == 0 || n==1){
            return n;
        }
        int low  = 0;
        int high = n/2;
        int ans = 1;
        while(low < high){
            long long mid = (low + high)/2;
            long long square = mid*mid;
            if(square==n){
                return mid;
            }
            else if(square>n){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};