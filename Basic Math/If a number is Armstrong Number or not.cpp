#include <iostream>
#include <cmath>
using namespace std;
class Solution {
public:
    bool isArmstrong(int n) {
        int k = to_string(n).length();
        int p;
        int num=0;
        int org_num =n;
        while(n>0){
            p = n%10;
            n /=10;
            num = num + pow(p,k);
        }
        return (org_num ==num);
    }
};
int main(){
    Solution s;
    int N;
    cin >> N;
    cout << s.isArmstrong(N);
}