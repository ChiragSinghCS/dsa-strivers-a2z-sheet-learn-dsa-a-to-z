#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
        int CountOne(int arr[], int n) {
            vector<int> OnekaCount;
            int count = 0;
            int max_count = 0;
            for(int i=0; i<n; i++){
                if(arr[i]==1){
                    count++;
                }
                else{
                    max_count = max(max_count,count);
                    count = 0;
                }
            }
            return max_count;
        }
};