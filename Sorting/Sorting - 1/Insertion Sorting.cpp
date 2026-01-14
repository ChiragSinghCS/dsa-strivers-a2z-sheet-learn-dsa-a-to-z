#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        // Insertion Sort -> To select the smallest and sort.
        int n = nums.size();
        for(int i = 0; i<n; i++){
            int j = i;
            while(j>0 && nums[j-1]>nums[j]){
                int temp = nums[j-1];
                nums[j-1] = nums[j];
                nums[j] = temp;
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
    vector<int> sorted = s.insertionSort(arr);
    for(auto x: sorted){
        cout << x;
    }
}