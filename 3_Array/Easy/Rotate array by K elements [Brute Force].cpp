#include <iostream>
using namespace std;
void rotateright(int arr[], int n, int k){
    if (n<=1) return;
    k = k%n;
    int temp[n];
        // Adding last k elements into temp array
    for(int i = n-k; i < n ; i++){
        temp[i-n+k]=arr[i];
    }
        // Shifting first n-k elements by k to right
    for(int i=n-k-1; i>=0; i--){
        arr[i+k]=arr[i];
    }
        // Adding Elements in Temp array to start of original array
    for(int i=0; i<k; i++){
        arr[i]=arr[j];
    }
};
void rotateleft(int arr[]; int n; int k){
    if(n<=1) return;
    int temp[n];
    k=k%n;
        // Adding first k elements into temp array
    for(int i=0; i<k; i++){
        temp[i]=arr[k];
    }
        // Shifting last n-k elements by k to left
    for(int i=n-k-1; i<n; i++){
        arr[i-k]=arr[i]
    }
    for(int i = ;i<k; i++)

}