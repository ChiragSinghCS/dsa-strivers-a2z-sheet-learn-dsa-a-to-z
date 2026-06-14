#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
        int getSingleElement(vector<int>& arr) {
            int n = arr.size();
            for(int i=0; i<n; i++){
                bool doAppear = false;
                for(int j=0; j<n; j++){
                    if(i!=j && arr[i]==arr[j]){
                        doAppear = true;
                        break;
                    }
                }
                if(!doAppear){
                    return arr[i];
                }
            }
            return -1;
        }
};