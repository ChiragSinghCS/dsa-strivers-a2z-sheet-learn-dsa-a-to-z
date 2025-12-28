#include <iostream>
using namespace std;
class Solution{
    public:
        int Factorial(int n){
            int fact = 1;
            for(int i = 1; i<=n; i++){
                fact = fact * i;
            }
            return fact;
        }
};
int main(){
    int N;
    cin >> N;
    Solution s;
    cout << s.Factorial(N);
}