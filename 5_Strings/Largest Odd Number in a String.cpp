#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution{	
public:		
    string largeOddNum(string& s){
        int n = s.length();
        for(int i = n-1; i >= 0; i--){
            int digit = s[i]-'0';
            if(digit%2!=0){
                string ans = s.substr(0,i+1);
                int start = 0;
                while(start < ans.length() && ans[start]=='0'){
                    start++;
                }
                return ans.substr(start);
            }
        }
        return "";
    }
};