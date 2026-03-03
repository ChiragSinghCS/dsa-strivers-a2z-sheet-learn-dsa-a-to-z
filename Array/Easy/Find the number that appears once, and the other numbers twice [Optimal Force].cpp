#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
        int getSingleElement(vector<int>& arr) {
            int xorr = 0;
            int n = arr.size();
            for(int i=0; i<n; i++){
                xorr = xorr ^ arr[i];
            }
            return xorr;
        }
};