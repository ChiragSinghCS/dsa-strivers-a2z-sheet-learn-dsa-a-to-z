#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin >> n;
    for(i=0;i<n;i++){
        char p = 'A'; // "" - 2 byte , '' - 1 byte
        for(j=0;j<i+1;j++){
            cout<< p << " " ;
            p++;
        }
        cout << endl;
    }
}