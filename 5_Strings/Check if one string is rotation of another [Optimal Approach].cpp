#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

class Solution{	
	public:
		bool anagramStrings(string& s,string t){
            if(s.length()!=t.length()){
                return false;
            }
            string doubleS = s+s;
            return doubleS.find(t) != string::npos;
            // or return doubleS.contains(t);
		}
};