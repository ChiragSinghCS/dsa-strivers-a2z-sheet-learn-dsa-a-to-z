#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        int N= nums.size();
        for(int i=0; i<N-1; i++){
            int mini = i;
            for(int j=i+1; j<N; j++){
                if(nums[j]<nums[mini]){
                    mini = j;
                }
            }
            
            int temp = nums[i];
            nums[i] = nums[mini];
            nums[mini] = temp;
        }
        return nums;
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
    vector<int> sorted = s.selectionSort(arr);
    for(auto x: sorted){
        cout << x;
    }
}