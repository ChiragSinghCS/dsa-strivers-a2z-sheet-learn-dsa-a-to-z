#include<iostream>
#include<stack>
#include<vector>
using namespace std;

class Solution
{
public:
    int largestRectangleArea(vector<int> &heights) {
        int n = heights.size();
        int maxRectArea = 0;
        for(int i = 0; i<n; i++){
            
            int minH= INT_MAX;
            for(int j =i; j<n; j++){
                minH =min(minH,heights[j]);
                maxRectArea = max(maxRectArea, minH*(j-i+1));
            }
        }
        return maxRectArea;
    }
};