#include <iostream>
using namespace std;
class Solution{
    public:
        bool CheckPalindrome(string a){
            int n = a.length();
            for(int i=0; i<n/2; i++){
                if(a[i]==a[n-i-1]) continue;
                else return false;
            }
            return true;
        }
};
int main(){
    string N;
    cin >> N;
    Solution s;
    cout << s.CheckPalindrome(N);
}