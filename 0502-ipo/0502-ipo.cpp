class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=profits.size();
        vector<pair<int,int>> proj;
        for(int i=0;i<n;i++){
            proj.push_back({capital[i],profits[i]});
        }
        priority_queue<int> p;
        sort(proj.begin(),proj.end());
        int idx=0;
        while(k--){
            while(idx<n){
                if(w<proj[idx].first){
                    break;
                }
               
                p.push(proj[idx].second);
                 idx++;

            }
            if(p.empty()){
                return w;
            }
            int res=p.top();
            p.pop();
            w=w+res;
        }
        return w;


        
    }
};