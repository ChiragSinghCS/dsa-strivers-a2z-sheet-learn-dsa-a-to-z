#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        // Insertion Sort -> To select the smallest and sort.
        insertionSortHelper(nums, nums.size(), nums.size()-1);
        return nums;

    }
    void insertionSortHelper(vector<int>&nums, int n, int i){
        if(n==1) return;
        int didswap = 0;
        int j =0;
        while(i>j){
            if(nums[i-1]>nums[i]){
                swap(nums[i-1], nums[i]);
                didswap = 1;
            }
            i--;
        }
        if(didswap=0)  return;
        j++;
        if(j==n-2) return;
        return insertionSortHelper(nums, n, nums.size()-1);

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
    vector<int> sorted = s.insertionSort(arr);
    for(auto x: sorted){
        cout << x;
    }
}