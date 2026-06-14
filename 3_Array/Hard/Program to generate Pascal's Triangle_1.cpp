// given r- row and c-column find element at that place
#include <iostream>
using namespace std;
class Solution {
public:
    int pascalTriangleI(int r, int c) {
        int result;
        int j=1;
        for(int i= r-1; i>(r-c) ; i--){
            if(j<c){
            result *= i/j;
            j++;
            }
        }
    return result;
    }
};

int main(){
    Solution s;
    cout << s.pascalTriangleI(10,3);
}
