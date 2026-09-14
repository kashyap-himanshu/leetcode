class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adj(n);
        for(int i=0;i<times.size();i++){
            int src=times[i][0];
            int dest=times[i][1];
            int wt=times[i][2];
            adj[src-1].push_back({dest-1,wt});
        }
        vector<int> res(n,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
        int src=k-1;
        res[src]=0;
        p.push({0,src});
        while(!p.empty()){
            int dist=p.top().first;
            int src=p.top().second;
            p.pop();
            for(int i=0;i<adj[src].size();i++){
                int sr=adj[src][i].first;
                int w=adj[src][i].second;
                if(dist+w<res[sr]){
                    res[sr]=dist+w;
                    p.push({dist+w,sr});
                }
            }
        }
        int maxi=*max_element(res.begin(),res.end());
        if(maxi==INT_MAX)return -1;
        return maxi;


        
    }
};