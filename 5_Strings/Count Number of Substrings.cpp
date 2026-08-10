#include<iostream>
#include<vector>
#include<string>
#include<unordered_map>
#include<algorithm>
using namespace std;

int atMostKDistinct(string s, int k) {
    int n = s.size();
    int left = 0;
    int result = 0;
    unordered_map<char, int> freq;
    for(int right = 0; right < n; right++){
        freq[s[right]]++;
        while (freq.size()>k)
        {
            freq[s[left]]--;
            if(freq[s[left]] == 0){
                freq.erase(s[left]);
            }
            left++;
        }
        result += right-left+1;
    }
    return result;
}

// Function to count substrings with exactly k distinct characters
int countSubstrings(string s, int k) {
    return atMostKDistinct(s,k)-atMostKDistinct(s,k-1);
}