#include <iostream>
#include <vector>
using namespace std;
class Solution{
    public:
        vector<int> moveZeroes(vector<int>& arr){
            vector<int> temp;
            int n = arr.size();
            for(auto num: arr){
                if(num!=0){
                    temp.emplace_back(num);
                }
            }
            while(temp.size()<arr.size()){
                temp.emplace_back(0);
            }
            for(int i = 0 ; i <n; i++){
                arr[i]=temp[i];
            }
            return arr;
        }
};