// Generating Nth row of Pascal's Triangle
#include <iostream>
using namespace std;
class Solution
{
public:
    void pascalTriangleI(int r)
    {
        for(int i = 1; i <= r; i++){
            int ans = 1;
            cout << ans;
            for(int j = 1; j < i; j++){
                ans = ans * (i-j)/j;
                cout << ans;
            }
            cout << endl;
        }
    }
};
int main()
{
    Solution s;
    s.pascalTriangleI(3);
}
