#include <iostream>
using namespace std;
class Solution{	
	public:
		int NumbersSum(int n){
            return n*(n+1)/2;
        }
};
int main(){
    int N;
    cin>> N;
    Solution s;
    cout << s.NumbersSum(N);
}