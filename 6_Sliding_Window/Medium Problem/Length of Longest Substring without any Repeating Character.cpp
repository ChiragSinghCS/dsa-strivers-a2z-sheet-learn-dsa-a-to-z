#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
  public:
    int longestNonRepeatingSubstring(string& s){
        int n = s.length();
        int start = 0;
        int maxlen = 0;
        int reset = 0;
        unordered_map<char, int>freq;
        for(int i =0; i<n; i++){
            freq[s[i]]++;
            if(freq[s[i]] > 1+reset){
                maxlen = max(maxlen, i-start);
                start = i;
                reset++;
            }
            if(i>0 && s[i] != s[i-1]){
                reset = 0;
            }
        }
        return maxlen;
    }
};