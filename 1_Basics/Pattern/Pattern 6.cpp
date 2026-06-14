#include <iostream>
using namespace std;
int main(){
    int i,j,p,n;
    cin >> n;
    for(i=0;i<n;i++){
        p=1;
        for(j=0;j<n-i;j++){
            cout<< p ;
            p++;
        }
        cout << endl;
    }
}