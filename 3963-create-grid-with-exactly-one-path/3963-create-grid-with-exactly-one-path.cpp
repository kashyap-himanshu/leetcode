class Solution {
public:
    vector<string> createGrid(int m, int n) {
    vector<vector<char>> mat(m,vector<char>(n));
    vector<string> ans;
    for(int i=0;i<m;i++){
        for(int j=0;j<mat[i].size();j++){
            if(i==0 || j==n-1){
                mat[i][j]='.';
            }else{
                mat[i][j]='#';
            }
            
        }
       
    }
    for(int i=0;i<m;i++){
        string s;
                for(int j=0;j<mat[i].size();j++){
                    s+=mat[i][j];

                }
                ans.push_back(s);
                }
                return ans;
    
    }
};