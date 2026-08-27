#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution {
public:
    int numberOfSubstrings(string s) {
        int n = s.size();
        int result = 0;
        int left =0;
        vector<int> freq(3, 0);
        for(int right = 0; right<n; right++){
            freq[s[right]-'a']++;
            while(freq['a'-'a']!=0 && freq['b'-'a']!=0 && freq['c'-'a']!=0){
                result += n-right;
                freq[s[left]-'a']--;
                left++;
            }
        }
        return result;
    }
};