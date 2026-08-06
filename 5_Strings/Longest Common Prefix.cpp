#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution{	
	public:
		string longestCommonPrefix(vector<string>& str){
            if(str.empty()){
                return "";
            }
            sort(str.begin(),str.end());
            int first = 0;
            int last = str.size()-1;
            int minlength = min(str[first].size(), str[last].size());
            string ans = "";
            for(int i = 0; i < minlength; i++){
                if(str[first][i] != str[last][i]){
                    break;
                }
                ans += str[first][i];
            }
            return ans;
        }
};