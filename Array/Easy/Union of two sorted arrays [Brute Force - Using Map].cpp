#include <iostream>
#include <vector>
#include <map>
using namespace std;
class Solution{
    public:
        vector<int> FindUnion(int arr1[], int arr2[], int n, int m) {
            vector<int> Union;
            map<int, int> mp;
            for(int i=0; i<n; i++){
                mp[arr1[i]]++;
            }
            for(int i=0; i<m; i++){
                mp[arr2[i]]++;
            }
            for(auto &it : mp){
                Union.emplace_back(it.first);
            }
            return Union;
        }

};