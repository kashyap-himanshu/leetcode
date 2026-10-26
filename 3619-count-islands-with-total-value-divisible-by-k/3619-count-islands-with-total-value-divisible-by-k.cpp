class Solution {
public:
int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};
bool check(int i,int j,int n,int m){
    if(i<0 || i>=n || j<0 || j>=m)return false;
    return true;
}
void solve(vector<vector<bool>> &vis,vector<vector<int>> &grid,int i,int j,int n,int m,long long int &sum){
    vis[i][j]=true;
    sum+=grid[i][j];
    for(int k=0;k<4;k++){
        int r=x[k]+i;
        int c=y[k]+j;
        if(check(r,c,n,m) && vis[r][c]==false && grid[r][c]!=0){
            solve(vis,grid,r,c,n,m,sum);
        }
    }
    return;

}
    int countIslands(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();

        vector<vector<bool>> vis(n,vector<bool>(m,false));

        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<grid[i].size();j++){
                if(vis[i][j]==false && grid[i][j]!=0){
                    long long int sum=0;
                    solve(vis,grid,i,j,n,m,sum);
                    if(sum!=0 && sum%k == 0)ans++;
                }
            }
        }
        return ans;
        
    }
};