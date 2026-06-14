#include <iostream>
#include <vector>
#include <set>
using namespace std;
class Solution{
    public:
        vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
            set<int> Union;

            //Inserting values into set
            for(int i=0; i<n; i++){
                Union.insert(arr1[i]);
            }
            for(int i=0; i<m; i++){
                Union.insert(arr1[i]);
            }

            //Converint set into vector
            vector<int> UnionArr(Union.begin(), Union.end());
            return UnionArr;
        }

};