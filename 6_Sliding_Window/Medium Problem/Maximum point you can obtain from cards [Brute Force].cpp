#include<iostream>
#include<vector>
using namespace std;

class Solution{
  public:
    int maxScore(vector<int>& cardScore , int k){
        int n = cardScore.size();
        int maxsum = 0;
        for(int i =0; i<=k; i++){
            int leftcard = i;
            int sum= 0;
            int rightcard = k-i;
            for(int left = 0; left<leftcard; left++){
                sum += cardScore[left];
            }
            for(int right = n-rightcard; right<n; right++){
                sum += cardScore[right];
            }
            maxsum = max(sum,maxsum);
        }
        return maxsum;
    }
};