#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        for(int i=0;i<row; i++){
            for(int j=0; j<column; j++){
                if (matrix[i][j] ==0){
                    for(int p=0; p< column; p++){
                        if(matrix[i][j]){
                            continue;
                        }
                        else{
                            matrix[i][p]=-1;
                        } 
                    }
                    for(int p=0; p< row; p++){
                        if(matrix[i][j]){
                            continue;
                        }
                        else{
                            matrix[p][j]=-1;
                        }
                    }
                }
            }
        }
        for(int i=0; i<row; i++){
            for(int j=0; j<column; j++){
                if(matrix[i][j]==-1){
                    matrix[i][j]==0;
                }
            }
        }
        return;
    }
};