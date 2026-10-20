class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> mat(n,vector<int>(n));
         int m=1;
         int left=0,right=n-1;
         int top=0,bottom=n-1;
         while(left<=right){
            for(int i=left;i<=right;i++){
                mat[top][i]=m;
                m++;
            }
            top++;
            for(int i=top;i<=bottom;i++){
                mat[i][right]=m;
                m++;
            }
            right--;
            for(int i=right;i>=left;i--){
                mat[bottom][i]=m;
                m++;
            }
            bottom--;
            for(int i=bottom;i>=top;i--){
                mat[i][left]=m;
                m++;
            }
            left++;

        }
        return mat;
        
    }
};