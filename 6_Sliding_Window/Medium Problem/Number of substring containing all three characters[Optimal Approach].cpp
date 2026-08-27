#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int right = 0;
        int left = 0;
        int subStrCount = 0;
        for(int right = 2; right<n; right++){
            string sub = s.substr(left, right-left+1);
            if(sub.find('a') != string::npos && sub.find('b') != string::npos && sub.find('c') != string::npos){
                subStrCount++;
            }
            if(right = n-1){
                while(left<n){
                    left++;
                    if(sub.find('a') != string::npos && sub.find('b') != string::npos && sub.find('c') != string::npos){
                    subStrCount++;
                }
            }
        }
        }
    return subStrCount;
}
};