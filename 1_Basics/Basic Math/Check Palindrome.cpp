#include <iostream>
using namespace std;
class Solution {
public:
    void reverseNumber(int n) {
        int rev_num = 0;
        int dup = n;
        while(n>0){
            int last_digit = n%10; // ALWAYS USE TO EXTRACT LAST DIGIT OF ANY NUMBER
            rev_num = (rev_num*10)+last_digit; // reverse_number * 10 will shift the last printed digit to left 
            n=n/10;
        }
        cout << rev_num;
        if (rev_num == dup) cout << "True" << endl;
        else cout << "False" << endl;
        
        if (rev_num == n) cout << "True" << endl;
        else cout << "False" << endl;
    }
};
int main(){
    Solution s;
    int N;
    cin >> N;
    s.reverseNumber(N);
}