#include <iostream>
using namespace std;
class Solution {
  public:
    void printNumbers(int n, int i) {
        if(i<1){
            return;
        }
        printNumbers(n,i-1);
        cout << i;
    }
};
int main(){
    int N;
    cin >> N;
    Solution s;
    s.printNumbers(N,N);
}