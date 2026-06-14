#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution{
    public:
        void arr_reverse(vector<int> &arr){
            reverse(arr.begin(), arr.end());
        }
};
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    Solution s;
    s.arr_reverse(arr);
    for(int num: arr){
        cout << num << " ";
    }
}