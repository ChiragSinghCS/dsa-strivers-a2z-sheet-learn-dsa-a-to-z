//PENDING ----------------- 

#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cin >> n;
    char p = 'A';
    for(i=0;i<n;i++){
        for(j=0;j<2*n;j++){
            if(j<n-i-1){
                cout << " ";
            }
            else if (j>n-i-1)
            {
                cout << " ";   
            }
            else if(j>=n-1 && j<=n-i-1)
            {
                cout << p;
                p++;
            }
        }
    cout << endl;
    }
}