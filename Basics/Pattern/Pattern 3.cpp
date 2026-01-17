#include <iostream>
using namespace std;
int main(){
    int i,j,p,n,q;
    cin >> n;
    for(i=0;i<n;i++){
        q = 1;
        for(j=0;j<i+1;j++){
                cout<< q;
                q++;
        }
        cout << endl;
    }
}