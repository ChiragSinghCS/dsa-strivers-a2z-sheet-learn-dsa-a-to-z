#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class Solution{
  public:
    int totalFruit(vector<int>& fruits){
        int n = fruits.size();
        int maxfruit = 0;
        int i = 0;
        int j = 0;
        unordered_map<int,int>basket;
        while(j<n){
            basket[fruits[j]]++;
            while(basket.size()>2){
                basket[fruits[i]]--;
                if(basket[fruits[i]] == 0){
                    basket.erase(fruits[i]);
                }
                i++;
            }
            maxfruit = max(maxfruit, j-i+1);
            j++;
        }
        return maxfruit;
    }
};