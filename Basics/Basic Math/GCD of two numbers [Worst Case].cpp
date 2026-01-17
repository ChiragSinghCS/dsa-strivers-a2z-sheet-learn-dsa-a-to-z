#include <iostream>
using namespace std;
class Solution {
public:
    void GCD(int n1,int n2) {
        int gcd = 1;
        int p = 1;
        while(p<=(min(n1,n2))){
            if(n1%p==0 && n2%p==0){
                gcd = p;
                p++;
            }
            else{
                p++;
            }
        }
        cout << gcd;
    }
};
int main(){
    int N1;
    cin >> N1;
    int N2;
    cin >> N2;
    Solution s;
    s.GCD(N1,N2);
}