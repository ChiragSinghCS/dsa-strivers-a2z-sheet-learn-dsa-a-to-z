//pending
#include <iostream>
using namespace std;
class Solution{
    public:
    void pattern22(int n){
        int i,j,p;
        for (p=n;p>0;p--){
            for(i=0;i<2*n;i++){
                for(j=0;j<2*n;j++){
                    if(i=j){
                        cout << n;
                    }
                    else{
                        continue;
                    }

                }
                cout << endl;
            }
        }
    }
}
int main(){
    Solution s;
    int N;
    cin >> N;
    s.pattern22(N);
}