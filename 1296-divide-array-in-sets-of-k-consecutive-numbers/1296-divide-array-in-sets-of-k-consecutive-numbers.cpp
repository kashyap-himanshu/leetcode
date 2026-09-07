class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        unordered_map<int,int> f;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
        for(int i=0;i<nums.size();i++){
            f[nums[i]]++;
        }
        for(auto it:f){
            p.push({it.first,it.second});
        }
        while(!p.empty()){
            vector<int> hima;
            vector<pair<int,int>> temp;
            for(int i=0;i<k;i++){
                if(p.empty())return false;;
                int top=p.top().first;
                int freq=p.top().second;
                freq--;
                p.pop();
                if(i>0 && top!=hima[i-1]+1)return false;

                hima.push_back(top);
                if(freq>0)temp.push_back({top,freq});
            }
            for(auto j:temp){
                p.push(j);
            }
        }
        return true;   
    }
};