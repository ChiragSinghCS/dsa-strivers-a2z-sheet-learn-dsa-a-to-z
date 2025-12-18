#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> v;
        for(int i=n;i>0;i--){
            if(n%i==0){
                v.emplace_back(i);
            }
        }
        return v;
    }
};
int main(){
    int N;
    cin >> N;
    Solution s;
    vector<int> ans = s.divisors(N);
    for(int x : ans){
        cout << x << " ";
    }
}