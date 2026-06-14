#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<2*n;j++){
            if (j<n-i) {
                cout << "*";
            }
            else if (j>n+i-1){
                cout << "*";    
            }
            else {
                cout << " ";
            }   
        }
    cout << endl;
    }
    for(i=0;i<n;i++){
        for(j=0;j<2*n;j++){
            if (j<i+1) {
                cout << "*";
            }
            else if (j>=2*n-i-1){
                cout << "*";
            }
            else {
                cout << " ";
            }   
        }
    cout << endl;
    }    
}