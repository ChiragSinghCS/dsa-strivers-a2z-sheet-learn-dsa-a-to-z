#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin >> n;
    char p = 'A';
    for(i=0;i<n;i++){
        for(j=0;j<i+1;j++){
            cout<< p << " " ;
        }
        p++;
        cout << endl;
    }
}