#include <iostream>
using namespace std;
class Solution{
    public:
        void Fibonacci(int n){
            int second_last = 0; 
            int last = 1;
            if (n==0){
                cout << second_last;
            }
            else if (n==1){
                cout << last;
            }
            else{
                cout << second_last << " " << last << " ";
                for(int i=2; i<=n; i++){
                    int current = last + second_last;
                    cout << current << " ";
                    second_last = last;
                    last = current;
                }
            }
            
            
        }
};
int main(){
    int N;
    cin >> N;
    Solution s;
    s.Fibonacci(N);
}