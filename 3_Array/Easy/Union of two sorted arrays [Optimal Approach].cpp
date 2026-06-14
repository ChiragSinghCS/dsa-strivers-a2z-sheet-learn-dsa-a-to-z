#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
        vector<int> findUnion(int arr1[], int arr2[], int n, int m) {
            //Only Works if array Sorted
            int i=0,j=0;
            vector<int> Union;
            while(i<n && j<m){
                if(arr1[i]<arr2[j]){
                    if(Union.empty() || Union.back() !=arr1[i]){
                        Union.emplace_back(arr1[i]);
                    }
                    i++;
                }
                else if(arr1[i]>arr2[j]){
                    if(Union.empty() || Union.back() !=arr2[j]){
                        Union.emplace_back(arr2[j]);
                    }
                    j++;
                }
                else{
                    if(Union.empty() || Union.back() !=arr1[i]){
                        Union.emplace_back(arr1[i]);
                    }
                    i++;
                    j++;
                }
            }
            while(i<n){
                if(Union.empty() || Union.back() !=arr1[i]){
                    Union.emplace_back(arr1[i]);
                }
                i++;
            }
            while (j<m){
                if(Union.empty() || Union.back() !=arr2[j]){
                    Union.emplace_back(arr2[j]);
                }
                j++;
            }
            return Union;
        }
};