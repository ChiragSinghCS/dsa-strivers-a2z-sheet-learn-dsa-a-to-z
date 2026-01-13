#include <iostream>
using namespace std;
class Solution{
    public:
        void Fibonacci(int n){
            int a = 0;
            int b = 1;
            if (n==0) cout << a;
            else if (n==1) cout << a << " "<< b;
            else{
                int arr[n+1];
                arr[0]=0;
                arr[1]=1;
                for(int i=2; i<=n; i++){
                    arr[i]=arr[i-1]+arr[i-2];
                }
                for(int i=0;i<=n;i++){
                    cout << arr[i] << " ";
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