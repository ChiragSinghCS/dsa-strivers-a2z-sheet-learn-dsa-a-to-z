#include <iostream>
using namespace std;
class Solution {
public:
    void countDigit(int n) {
        if(n<1 && n>=0){
            cout<< 1 << endl;
        }
        else if(n>=1){
            int p=0;
            while(n>=1){
                n=n/10;
                p++;
            }
            cout << p;
        }
    }
};
int main(){
    int N;
    cin >> N;
    Solution s;
    s.countDigit(N);
}