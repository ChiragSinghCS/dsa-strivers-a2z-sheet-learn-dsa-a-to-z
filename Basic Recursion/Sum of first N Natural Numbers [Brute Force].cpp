#include <iostream>
using namespace std;
class Solution{	
	public:
		int NumbersSum(int n){
            int sum = 0;
            for(int i=1; i<=n;i++){
                sum +=i;
            }
            return sum;
        }
};
int main(){
    int N;
    cin >> N;
    Solution s;
    cout << s.NumbersSum(N);
}