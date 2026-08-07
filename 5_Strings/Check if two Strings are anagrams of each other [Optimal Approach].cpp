#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution{	
	public:
		bool anagramStrings(string& s,string t){
            int m1[256] = {0}, m2[256] = {0};
            if(s.length()!=t.length()){
                return false;
            }
            for(int i = 0; i<s.length(); i++){
                m1[s[i]] += 1 ;
                m2[t[i]] += 1 ;
            }
            for(int i = 0; i<s.length(); i++){
                if(m1[s[i]]!=m2[s[i]]){
                    return false;
                }
            }
            return true;
        }
};