#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        int maxp = 1;
        string ans = "";
        for(int center = 0; center<n; center++){
            int maxp1 = 2;
            int maxp2 = 1;
            int check = 0;
            int i = center-1;
            int j = center+1;
            while(i>=0 && j<n){
                if(s[i] == s[j]){
                    maxp1++;
                    i--;
                    j++;
                    check = 1;
                }
                else{
                    break;
                }
            }
            i = center;
            j = center+1;
            while(i>=0 && j<n){
                if(s[i] == s[j]){
                    maxp2++;
                    i--;
                    j++;
                    check = 1;
                }
                else{
                    break;
                }
            }
            if(check != 0){
                maxp = max(maxp1, maxp2);
            }
        }
    }
};