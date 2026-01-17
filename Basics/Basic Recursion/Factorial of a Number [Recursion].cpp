#include <iostream>
using namespace std;
class Solution{
    public:
        int Factorial(int n){
            if(n==0){
                return 1;
            }
            return n*Factorial(n-1);
        }
};
int main(){
    int N;
    cin >> N;
    Solution s;
    cout << s.Factorial(N);
}