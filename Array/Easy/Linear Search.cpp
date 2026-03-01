#include <iostream>
using namespace std;
class Solution{
    int search(int arr[], int n, int num){
        for(int i=0; i<n; i++){
            if(arr[i] == num)
            return i;
        }
    }
};