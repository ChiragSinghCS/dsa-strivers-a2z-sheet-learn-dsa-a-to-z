#include <iostream>
using namespace std;
class Solution {
  public:
    void printNumbers(int n, int i) {
        if(i<1){
            return;
        }
        cout << i << endl;;
        printNumbers(n,i-1);   
    }
};
int main(){
    int N;
    cin >> N;
    Solution s;
    s.printNumbers(N,N);
}