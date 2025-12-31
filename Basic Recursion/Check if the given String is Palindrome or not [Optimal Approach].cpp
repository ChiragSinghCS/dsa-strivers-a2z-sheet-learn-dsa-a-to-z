#include <iostream>
using namespace std;
class Solution{
    public:
        bool isPalindrome(int i ,string n){
            if(i>=(n.length())/2){
                return true;
            }
            else if(n[i]!=n[n.length()-i-1]){
                return false;
            }
            
            return isPalindrome(i+1,n);
        }
};
int main(){
    string p;
    cin >> p;
    Solution s;
    cout << s.isPalindrome(0,p);
}