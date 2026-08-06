#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution{	
	public:
		bool anagramStrings(string& s,string t){
            int n = s.length();
            if(s==t) return true;
			for(int i = 0 ; i <n; i++){
                if(s.substr(i+1,n-(i+1))+s.substr(0,i+1)==t){
                    return true;
                }
            }
            return false;
		}
};