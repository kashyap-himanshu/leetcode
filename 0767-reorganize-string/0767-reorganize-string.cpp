class Solution {
public:
    string reorganizeString(string s) {
        priority_queue<pair<int,char>> p;
        unordered_map<char,int> f;
        string hima="";
        for(int i=0;i<s.length();i++){
            f[s[i]]++;

        }
        int res=0;
       for(auto it:f){
        p.push({it.second,it.first});

       }
       while(!p.empty()){
        pair<int,char> q=p.top();
        p.pop();
        if(res==0 || q.second!=hima[res-1]){
            hima.push_back(q.second);
             q.first--;
             res++;
            if(q.first>0){
               
                p.push(q);
            }

        }else{
             if(p.empty()){
                return "";
            }
            pair<int,char> q1=p.top();
            p.pop();
            hima.push_back(q1.second);
            q1.first--;
            res++;
            if(q1.first>0){
                p.push(q1);
            }
           
            if(q.first>0){
                p.push(q);
            }
        }
       }
       return hima;

        
        
    }
};