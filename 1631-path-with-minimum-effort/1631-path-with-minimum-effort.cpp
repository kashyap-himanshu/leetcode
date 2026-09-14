class Solution {
public:
bool valid(int i,int j,int n ,int m){
     if(i<0 || i>=n || j<0 || j>=m)return false;
     return true;
}
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<int>> res(n,vector<int>(m,INT_MAX));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>> >p;
        p.push({0,{0,0}});
        res[0][0]=0;
        int x[4]={-1,1,0,0};
        int y[4]={0,0,-1,1};
        while(!p.empty()){
            int wt=p.top().first;
            int row=p.top().second.first;
            int col=p.top().second.second;
            p.pop();
            if(wt>res[row][col])continue;
            for(int k=0;k<4;k++){
                int r=row+x[k];
                int c=col+y[k];
                if(!valid(r,c,n,m))continue;
                int absdiff=abs(heights[row][col]-heights[r][c]);
                absdiff=max(absdiff,wt);
                if(absdiff<res[r][c]){res[r][c]=absdiff;
                p.push({absdiff,{r,c}});}
            }

        }
        return res[n-1][m-1];
        
    }
};