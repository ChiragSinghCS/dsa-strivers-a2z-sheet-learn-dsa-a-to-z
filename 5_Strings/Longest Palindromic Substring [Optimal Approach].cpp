#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int start = 0;
        int end = 0;
        for(int center = 0; center < s.length(); center++){
            int oddlen = expandfromcenter(s, center, center);
            int evenlen = expandfromcenter(s, center, center+1);
            int maxlen = max(oddlen, evenlen);

            if(maxlen > end-start){
                start = center - (maxlen-1)/2;
                end = center + maxlen/2;
            }
        }
        return s.substr(start, end-start+1);
    }

    int expandfromcenter(string s, int left, int right){
        while(left >= 0 && right < s.length() && s[left] == s[right]){
            left--;
            right++;
        }
        return right - left -1;
    }
};