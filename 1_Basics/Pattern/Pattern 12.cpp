#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin >> n;
    for(i=0;i<n;i++){
        int p=1;
        int q=1+i;
        for(j=0;j<2*n;j++){
            if(j>i & j<2*n-i-1){
                cout << " ";
            }
            else if (j<i+1)
            {
                cout << p;
                p++;
            }
            else if (j>2*n-i-2){
                cout << q;
                q--;
            }
        }
        cout << endl;
    }
}