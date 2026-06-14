#include <iostream>
using namespace std;
class Solution{
    public:
        bool isPalindrome(string n){
            int left = 0;
            int right = n.length()-1;
            while(left < right){
                if(!isalnum(n[left])){
                    left++;
                }
                else if(!isalnum(n[right])){
                    right--;
                }
                else if(tolower(n[left])!=tolower(n[right])){
                    return false;
                }
                else{
                    left++;
                    right--;
                }
            }
            return true;
        }
};
int main(){
    string p;
    cin >> p;
    Solution s;
    cout << s.isPalindrome(p);
}