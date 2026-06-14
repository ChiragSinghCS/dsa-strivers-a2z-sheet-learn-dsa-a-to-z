#include <iostream>
using namespace std;
int main(){
    int i,j,p,n;
    cin >> n;
    for(i=0;i<n;i++){
        p=i+1;
        for(j=0;j<i+1;j++){
            cout<< p ;
        }
        cout << endl;
    }
}