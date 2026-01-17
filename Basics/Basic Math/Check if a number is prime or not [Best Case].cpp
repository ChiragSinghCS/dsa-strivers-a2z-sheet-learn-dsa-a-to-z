#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    bool isPrime(int n) {
        int i;
        if(i<=1){
            return false;
        }
        for(i=2;i*i<n;i++){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
};
int main(){
    int N;
    cin >> N;
    Solution s;
    cout << s.isPrime(N) << endl;
    if(s.isPrime(N)){
        cout << "Prime";
    }
    else cout << "Not Prime";
}