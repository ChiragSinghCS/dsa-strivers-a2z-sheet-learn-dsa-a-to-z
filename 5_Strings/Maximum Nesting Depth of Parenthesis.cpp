#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int count = 0;
        int max_count = 0;
        for(int i = 0; i<n; i++){
            if(s[i]=='('){
                count++;
                max_count= max(max_count, count);
            }
            else if(s[i]==')'){
                count--;
            }
        }
        return max_count;
    }
};
