#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution {
public:
    vector<int> findMissingRepeatingNumbers(vector<int> nums) {
        long long n = nums.size();
        long long sum_total = n*(n+1)/2;
        long long sum_square_total = n*(n+1)*(2*n+1)/6;
        long long sum=0;
        long long sum_square=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            sum_square+=(long long)(nums[i]*nums[i]);
        }
        long long val1 = sum-sum_total;
        long long val2 = sum_square-sum_square_total;
        val2=val2/val1;
        long long repeating = (val1+val2)/2;
        long long missing = repeating - val1;
        return {(int)repeating,(int)missing};
    }
};