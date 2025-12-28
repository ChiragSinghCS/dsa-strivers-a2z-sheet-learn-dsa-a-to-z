#include <iostream>
using namespace std;
class Solution{	
	public:
		int NumbersSum(int n){
            if(n<1){
                return 0;
            }
            return n + NumbersSum(n-1);
        }
};
int main(){
    int N;
    cin >> N;
    Solution s;
    cout << s.NumbersSum(N);
}