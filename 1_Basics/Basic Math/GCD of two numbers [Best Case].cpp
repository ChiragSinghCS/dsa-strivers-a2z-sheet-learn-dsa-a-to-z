#include <iostream>
using namespace std;
class Solution {
public:
    int GCD(int n1,int n2) {
        while (n1>0 && n2>0){
            if(n1>n2){
                n1=n1%n2;
            }
            else{
                n2=n2%n1;
            }
        }
        if(n1==0){
            return n2;
        }
        return n1;
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