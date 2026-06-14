#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> v;
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                v.emplace_back(i);
                if(n/i != i){
                    v.emplace_back(n/i);
                }
            }
        }
        return v;
    }
};
int main(){
    int N;
    cin >> N;
    Solution s;
    vector<int> result = s.divisors(N);
    for(int x : result){
        cout << x << " ";
    }
}