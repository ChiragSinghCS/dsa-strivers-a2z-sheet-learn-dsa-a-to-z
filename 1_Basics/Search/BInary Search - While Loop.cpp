#include <iostream>
#include <vector>
using namespace std;
int BinarySearch(vector<int> num, int query){
    int low = 0;
    int high = num.size()-1;
    while(low<=high){
        int mid = (low + high)/2;
        if(num[mid]>query){
            high = mid - 1;
        }
        else if(num[mid]<query){
            low = mid + 1;
        }
        else if(num[mid]==query){
            return mid;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,3,4,6,7,8,10,12,13};
    int query = 10;
    cout << BinarySearch(arr, query);
}