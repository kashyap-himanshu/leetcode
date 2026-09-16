class Solution {
public:
bool valid(int i,int j,int n,int m){
    if(i<0 || i>=n || j<0 || j>=m)return false;
    return true;
}

    int swimInWater(vector<vector<int>>& a) {
        
        int n=a.size();
        int m=a[0].size();
       
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>> >p;
        vector<vector<int>> res(n,vector<int> (m,INT_MAX));
        p.push({a[0][0],{0,0}});
        res[0][0]=a[0][0];
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
                int newmoney=max(wt,a[r][c]);
                if(newmoney<res[r][c]){
                    res[r][c]=newmoney;
                    p.push({newmoney,{r,c}});
                }

            }
        }
        return res[n-1][m-1];

        
    }
};