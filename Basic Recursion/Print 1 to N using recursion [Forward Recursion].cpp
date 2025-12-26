#include <iostream>
using namespace std;
class Solution {
  public:
    void printNumbers(int n, int i) {
        if(i>n){
            return;
        }
        cout << i << endl;
        printNumbers(n,i+1);
    }
};
int main(){
    int N;
    cin >> N;
    Solution s;
    s.printNumbers(N,1);
}