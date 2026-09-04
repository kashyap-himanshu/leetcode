class Solution {
public:
int x[4]={-1,1,0,0};
int y[4]={0,0,-1,1};
bool valid(int i,int j,int n,int m){
    if(i<0 || i>=n || j<0 ||j>=m)return false;
    return true;
}
void dfs(vector<vector<int>> &image,int real,int color,int i,int j,int n,int m){
     image[i][j]=color;
    for(int k=0;k<4;k++){
        int row=i+x[k];
        int col=j+y[k];
        if(valid(row,col,n,m) && image[row][col]==real){
            dfs(image,real,color,row,col,n,m);
        }
    }
    return;
}
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        int real=image[sr][sc];
        if(real==color)return image;  
        dfs(image,real,color,sr,sc,n,m);   
        return image;
    }
};