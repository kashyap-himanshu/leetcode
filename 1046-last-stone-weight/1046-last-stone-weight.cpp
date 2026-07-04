class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> p;
        for(int i=0;i<stones.size();i++){
            p.push(stones[i]);
        }
        while(!p.empty()){
            int res=p.top();
            p.pop();
            if(p.empty()){
                return res;
            }
            if(res==p.top()){
                p.pop();
            }else {
                int ans=p.top();
                p.pop();
                p.push(res-ans);
            

            }

            if(p.size()==1){
                return p.top();
            }


        }
        return 0;

        
    }
};