class Solution {
public:
void dfs(vector<vector<int>> &rooms,vector<bool> &vis,int i,int n){
    vis[i]=true;
    for(int j=0;j<rooms[i].size();j++){
        int vertices=rooms[i][j];
        if(vis[vertices]==false){
            dfs(rooms,vis,vertices,n);
        }
        

    }
    return;
}
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n=rooms.size();
        vector<bool> vis(n,false);
        dfs(rooms,vis,0,n);
        for(int i=0;i<n;i++){
            if(vis[i]==false) return false;
        }
        return true;
    }
};