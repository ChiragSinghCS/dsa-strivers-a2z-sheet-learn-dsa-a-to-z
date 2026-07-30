#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Reverse the entire string
        reverse(s.begin(), s.end());
        
        int n = s.length();
        int left = 0; // Pointer to place characters
        int right = 0; // Pointer to scan the string
        int i = 0; // Pointer for word boundaries
        
        // Step 2 & 3: Clean spaces and reverse words
        while (i < n) {
            // Skip spaces
            while (i < n && s[i] == ' ') {
                i++;
            }
            if (i == n) break; // Reached the end
            
            // Add a single space before the word if it's not the first word
            if (left > 0) {
                s[left++] = ' ';
            }
            
            // Copy the word to its correct position
            right = left;
            while (i < n && s[i] != ' ') {
                s[left++] = s[i++];
            }
            
            // Reverse the individual word we just copied
            reverse(s.begin() + right, s.begin() + left);
        }
        
        // Resize the string to remove any leftover characters at the end
        s.resize(left);
        
        return s;
    }
};