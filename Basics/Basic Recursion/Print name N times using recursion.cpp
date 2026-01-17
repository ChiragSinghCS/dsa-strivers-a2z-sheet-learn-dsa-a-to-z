#include <iostream>
using namespace std;
class Solution {
  public:
    void printName(int n) {
        cout << "Name" << endl;
        if (n==1){
            return;
        }
        printName(n-1);
    }
};
int main(){
    int N;
    cin >> N;
    Solution s;
    s.printName(N);
}