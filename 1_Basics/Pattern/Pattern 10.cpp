#include <iostream>
using namespace std;
int main(){
    int i,j,p,n;
    cin >> n;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<<"*";
        }
        cout << endl;
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            cout<<"*";
        }
        cout << endl;
    }
}