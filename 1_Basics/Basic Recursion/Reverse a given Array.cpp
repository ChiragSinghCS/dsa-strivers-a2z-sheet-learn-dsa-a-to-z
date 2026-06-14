#include <iostream>
using namespace std;
class Solution{
public:
    void reverse(int arr[], int n){
        
    }
};
int main(){
    int N;
    cin >> N;
    int arr[N];
    //Making Array
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    //Printing Array
    for(int i=0; i<N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    //Reversing Array
    int rev_arr[N];
    for(int i=0; i<N; i++){
        rev_arr[i]=arr[N-i-1];
    }
    //Printing Reversed Array
    for(int i=0; i<N; i++){
        cout << rev_arr[i] << " ";
    }
}