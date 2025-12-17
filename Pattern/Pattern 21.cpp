#include <iostream>
using namespace std;
class Solution{
    public:
    void pattern21(int n){
        int i,j;
        for(i=0;i<2*n-1;i++){
            if(i%2==0 && (i == 0 || i ==2*n-2)){
                for(j=0;j<n;j++){
                    {
                        cout << "*";
                    }
                }
            }
            else if (i%2==0 && (i != 0 || i !=2*n-2)){
                for(j=0;j<n;j++){
                    {
                        if(j==0){
                            cout << "*";
                        }
                        else if(j==n-1){
                            cout << "*";
                        }
                        else {
                            cout <<" ";
        
                    }
                }
            }
            
        }
        cout << endl;
    }
}};
int main(){
    Solution sol21;
    int N;
    cin >> N;
    sol21.pattern21(N);
}
