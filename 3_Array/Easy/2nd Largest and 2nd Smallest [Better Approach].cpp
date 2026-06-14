#include <iostream>
using namespace std;
class Solution {
public:
    int second(int arr[], int n){
        int largest = INT_MIN;
        int second_largest = INT_MIN;
        int smallest = INT_MAX;
        int second_smallest = INT_MAX;
        for(int i = 0; i < n; i++){
            if(arr[i]>largest){
                largest = arr[i];
            }
        }
        for(int i = 0; i < n; i++){
            if(arr[i]>second_largest && arr[i]!=largest){
                second_largest = arr[i];
            }
        }
        for(int i = 0; i < n; i++){
            if(arr[i]<smallest){
                smallest = arr[i];
            }
        }
        for(int i = 0; i < n; i++){
            if(arr[i]<second_smallest && arr[i]!=smallest){
                second_smallest = arr[i];
            }
        }
    }
};