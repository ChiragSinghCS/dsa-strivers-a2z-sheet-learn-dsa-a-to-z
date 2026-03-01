#include <iostream>
using namespace std;
class Solution{
    public:
        int second(int arr[], int n){
            int largest , second_largest = INT_MIN;
            int smallest, second_smallest = INT_MAX;
            for(int i = 0; i < n; i++){
                if(arr[i]<smallest){
                    second_smallest = smallest;
                    smallest = arr[i];
                }
                if(arr[i]>largest){
                    second_largest = largest;
                    largest = arr[i];
                }
            }
       }
};