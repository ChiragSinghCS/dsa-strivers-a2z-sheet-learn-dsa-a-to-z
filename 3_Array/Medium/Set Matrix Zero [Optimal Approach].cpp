#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        bool isRowZero = false;
        bool isColZero = false;
        //To check whether first row need to be zero
        for(int i = 0;i <column; i++){
            if(matrix[0][i]==0){
                isRowZero= true;
                break;
            }
        }
        //To check whether first col need to be zero
        for(int i = 0;i <row; i++){
            if(matrix[i][0]==0){
                isColZero= true;
                break;
            }
        }
        //if other than first row/col any element zero set it first row and col element zero
        for(int i=1; i<row; i++){
            for(int j=1; j<column;j++){
                if(matrix[i][j]==0){
                    matrix[0][j]=0;
                    matrix[i][0]=0;
                }
            }
        }
        // if any element in first row zero set its col to zero
        for(int i=0; i<column; i++){
            if(matrix[0][i]==0){
                for(int j=0; j<row; j++){
                    matrix[j][i]=0;
                }
            }
        }
        // if any element in first col zero set its row to zero
        for(int i=0; i<row; i++){
            if(matrix[i][0]==0){
                for(int j=0; j<column; j++){
                    matrix[i][j]=0;
                }
            }
        }
        // if bool true set that row to zero
        if(isRowZero){
            for(int i=0; i<column; i++){
                matrix[0][i]=0;
            }
        }
        // if bool true set that col to zero
        if(isColZero){
            for(int i=0; i<row; i++){
                matrix[i][0]=0;
            }
        }

        return;
    }
};