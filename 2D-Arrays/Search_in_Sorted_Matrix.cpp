#include <iostream>

using namespace std;

int BruteForce(int mat[][4],int n , int m,int target) {

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++) {
        if(mat[i][j]==target)
        return 1;
    }
}
return -1;

}

void StairCase_Approach() {
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=mat[0]
    }
};    
}

int main() {
    
    int mat[4][4] = {
     {10,20,30,40},
     {15,25,35,45},
     {27,29,37,48},
     {32,33,39,50}        
    };
    
    cout<<BruteForce(mat,4,4,345);
    return 0;
}