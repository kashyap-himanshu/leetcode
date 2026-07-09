class Solution {
public:
    int minRefuelStops(int target, int startfuel, vector<vector<int>>& stations) {
    
        int idx=0;
        int res=0;
        priority_queue<int> p;
        while(startfuel<target){
        while(idx<stations.size()){
            if(startfuel<stations[idx][0]){
                break;
            }
           p.push(stations[idx][1]);
           idx++;
        }
        if(p.empty()){
            return -1;
        }
        startfuel=startfuel+p.top();
        p.pop();
        res++;
        }
        return res;
        
    }
};