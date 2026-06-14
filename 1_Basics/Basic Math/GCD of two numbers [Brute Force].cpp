#include <iostream>
using namespace std;
class Solution {
public:
    int GCD(int n1,int n2) {
        int gcd;
        for(int i=min(n1,n2); i>0; i--){
            if(n1%i == 0 && n2%i==0){
                return i;
            }
        }
        return 1;
    }
};
int main(){
    int N1;
    cin >> N1;
    int N2;
    cin >> N2;
    Solution s;
    cout << s.GCD(N1,N2);
}