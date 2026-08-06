#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isomorphicString(string s, string t) {
    	int n = s.length();
        int m1[256] = {0}, m2[256]={0};
        for(int i = 0; i<n; i++){
            if(m1[s[i]]!=m2[s[i]]){
                return false;
            }
            m1[s[i]] = i+1;
            m2[t[i]] = i+1;
        }
        return true;
    }
};