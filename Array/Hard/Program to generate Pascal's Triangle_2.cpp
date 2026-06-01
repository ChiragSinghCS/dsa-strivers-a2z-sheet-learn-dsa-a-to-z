// Generating Nth row of Pascal's Triangle
#include <iostream>
using namespace std;
class Solution
{
public:
    void pascalTriangleI(int r)
    {
        int ans = 1;
        cout << ans <<" ";
        for(int i=1; i<r; i++){
            ans = ans*(r-i)/(i);
            cout << ans << " ";
        }
    }
};
int main()
{
    Solution s;
    s.pascalTriangleI(10);
}
