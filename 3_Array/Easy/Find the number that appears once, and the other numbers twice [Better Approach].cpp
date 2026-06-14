#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
        int getSingleElement(vector<int>& arr) {
            int n = arr.size();
            int maxi=0;
            for(int i=0; i<n; i++){
                maxi=max(maxi,arr[i]);
            }

            //Hash array with all value zero
            vector<int> hash(maxi+1,0);

            for(int i=0; i<n; i++){
                hash[arr[i]]++;
            }

            for(int i=0; i<n; i++){
                if(hash[arr[i]]==1){
                    return arr[i];
                }
            }
        }
};