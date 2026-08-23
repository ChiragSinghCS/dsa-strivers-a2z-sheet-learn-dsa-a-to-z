#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();
        int max_length = 0;
        for(int i = 0; i < n; i++){
            vector<int> freq(26, 0);
            int maxFreq = 0;
            for(int j = i; j < n; j++){
                freq[s[j]-'A']++;
                maxFreq = max(maxFreq, freq[s[j]-'A']);
                int window_length = j - i + 1;
                int replace =  window_length - maxFreq;
                if(replace < k){
                    max_length = max(max_length, window_length);
                }
            }
        }
    }
};