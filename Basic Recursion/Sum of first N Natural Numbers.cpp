#include <iostream>
using namespace std;
class Solution{	
	public:
		void NumbersSum(int n, int &sum){
            if(n==0){
                return;
            }
            sum = sum + n;
            NumbersSum(n-1,sum);
		}
};
int main(){
    int sum = 0;
    int N;
    cin >> N;
    Solution s;
    s.NumbersSum(N,sum);
    cout << sum;
}