#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        bubbleSortHelper(nums, nums.size());
        return nums;
    }
    void bubbleSortHelper(vector<int>& nums, int n) {
        if(n==1) return;
        for(int i=0; i<n-1; i++){
            if(nums[i]>nums[i+1]){
                swap(nums[i],nums[i+1]);
            }
        }
        return bubbleSortHelper(nums, n-1);
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