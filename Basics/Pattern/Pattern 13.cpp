#include <iostream>
using namespace std;
int main(){
    int i,j,n,p;
    cin >> n;
    p=1;
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<< p << " " ;
            p++;
        }
        cout << endl;
    }
}