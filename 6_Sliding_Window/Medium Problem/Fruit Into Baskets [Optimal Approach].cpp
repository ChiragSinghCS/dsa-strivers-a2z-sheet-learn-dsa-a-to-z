#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

class Solution{
  public:
    int totalFruits(vector<int>& fruits){
        int n = fruits.size();
        int maxfruit = 0;
        for(int i = 0; i<n; i++){
            unordered_map<int, int> basket;
            for(int j = i; j<n; j++){
                basket[fruits[j]]++;
                if(basket.size() > 2){
                    break;
                }
                maxfruit = max((j - i + 1), maxfruit);
            }
        }
        return maxfruit;
    }
};