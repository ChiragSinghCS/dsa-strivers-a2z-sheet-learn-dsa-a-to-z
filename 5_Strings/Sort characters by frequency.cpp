#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution{	
    private:
        static bool comparator(pair<int,char>p1, pair<int,char>p2){
            if(p1.first > p2.first) return true;
            if(p1.first < p2.first) return false;
            return p1.second < p2.second ;
        }
	public:
		vector<char> frequencySort(string& s){
            pair<int,char> freq[26];
            for(int i = 0; i< 26; i++){
                freq[i] = {0, 'a'+i};
            }
            for(int i = 0; i<s.length(); i++){
                freq[s[i]-'a'].first++;
            }
            sort(freq, freq + s.length(), comparator); //sort when comparator returns false
            vector<char> ans;
            for(int i = 0; i<26; i++){
                if(freq[i].first>0){
                    ans.push_back(freq[i].second);
                }
            }
            return ans;
        }
};