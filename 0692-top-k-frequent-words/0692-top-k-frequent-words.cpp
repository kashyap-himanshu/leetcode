class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> hima;
        unordered_map<string,int> f;
        priority_queue<pair<int,string>> p;
        for(int i=0;i<words.size();i++){
            f[words[i]]++;
        }  

        for(auto it:f){
            p.push({it.second,it.first});
        }  
        vector<string> m;
        int j=0;

        for(int i=1;i<=k;i++){
            m.push_back(p.top().second);
            int l=p.top().first;
            p.pop();

            while( !p.empty() && p.top().first==l){
                i++;
                m.push_back(p.top().second);
                p.pop();
                
                sort(m.begin()+j,m.begin()+(i));

            }
            j=i;
           
        } 
        for(int i=0;i<k;i++){
            hima.push_back(m[i]);
        }
        return hima;
    }
};