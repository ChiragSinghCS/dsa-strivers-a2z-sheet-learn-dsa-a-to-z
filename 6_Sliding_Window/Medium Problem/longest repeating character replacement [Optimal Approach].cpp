#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxCount = 0;
        int maxLength = 0;
        int i = 0;
        int j = 0;
        int n = s.size();
        vector<int>freq (26,0);
        while(j<n){
            freq[s[j]-'A']++;
            maxCount = max(freq[s[j]-'A'], maxCount);
            while((j-i+1)-maxCount > k){
                freq[s[i]-'A']--;
                i++;
            }
            maxLength = max(maxLength, j-i+1);
            j++;
        }
        return maxLength;
    }
};