#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int buy_price=100;
        int buy;
        int n = prices.size();
        int sell=n-1;
        for(int i=0;i<n; i++){
            if(prices[i]<buy_price){
                buy_price=prices[i];
                buy=i;
            };
        }
        return buy_price;
};
int main(){
    vector<int> prices={7,1,5,3,6,4};
    Solution s;
    cout << s.maxProfit(prices);
}