#include<iostream>
#include<vector>
#include<unordered_map>
#include<string>
using namespace std;

class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int sum = 0;
        for(int left = 0; left < n; left++){
            unordered_map<char, int> freq;
            for(int right = left; right < n; right++){
                freq[s[right]]++;
                int mini = INT_MAX;
                int maxi = INT_MIN;
                for(auto it: freq){
                    mini = min(mini, it.second);
                    maxi = max(maxi, it.second);
                }
                sum += (maxi-mini);
            }
        }
        return sum;
    }
};