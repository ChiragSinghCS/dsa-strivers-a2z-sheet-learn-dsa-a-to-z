#include <iostream>
#include <vector>
using namespace std;
int BinarySearch(vector<int> num, int high, int low, int query){
    if(low <= high){
        int mid = (high+low)/2;
        if(num[mid] > query){
            return BinarySearch(num, mid-1, low, query);
        }
        else if(num[mid] < query){
            return BinarySearch(num, high, mid+1, query);
        }
        else if (num[mid]==query){
            return mid;
        }
        
    }
    return -1;
}   
int main(){
    vector<int> arr = {1,3,4,6,7,8,10,12,13};
    int query = 10;
    int low = 0;
    int high = arr.size() - 1;
    cout << BinarySearch(arr, high, low, query);
}