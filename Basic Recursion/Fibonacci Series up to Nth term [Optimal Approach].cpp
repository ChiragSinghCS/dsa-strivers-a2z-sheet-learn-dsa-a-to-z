#include <iostream>
using namespace std;
class Solution{
    public:
        int Fibonacci(int n){
            if(n<=1){
                return n;
            }
            else{
                int last = Fibonacci(n-1);
                int second_last =  Fibonacci(n-2);
                return last + second_last;
            }
        }
};
int main(){
    int N;
    cin >> N;
    Solution s;
    cout << s.Fibonacci(N);
}