#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        for(int i = n-1; i >= 0; i--){
            for(int j=0 ; j<i; j++){
                if(nums[j]>nums[j+1]){
                    int temp = nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = temp;
                }
            }
        }
    }
};
int main(){
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0;i<n;i++){
        int numb;
        cin >> numb;
        arr.push_back(numb);
    }
    Solution s;
    vector<int> sorted = s.bubbleSort(arr);
    for(auto x: sorted){
        cout << x;
    }
}