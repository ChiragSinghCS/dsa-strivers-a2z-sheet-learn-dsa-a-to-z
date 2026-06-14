#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
        vector<int> reverse(vector<int> &arr){
            int n = arr.size();
            vector <int> ans(n);
            for(int i=0 ; i<n; i++){
                ans[i] = arr [n-i-1];
            }
            return ans;
        }
};
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    Solution s;
    vector<int> result = s.reverse(arr);
    for(int num: result){
        cout << num << " ";
    }
}