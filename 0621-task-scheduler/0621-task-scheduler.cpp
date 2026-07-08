class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {  
    vector<int> hima(26,0);
    for(int i=0;i<tasks.size();i++){
        hima[tasks[i]-65]++;
    }
    priority_queue<int> p;
    for(int i=0;i<26;i++){
        if(hima[i]>0){
            p.push(hima[i]);
        }
    }int time=0;
    while(!p.empty()){
        vector<int> temp;
        for(int i=1;i<=n+1;i++){
            if(!p.empty()){
                  int res=p.top()-1;
                temp.push_back(res);
              
                p.pop();
            }
        }
        for(int i=0;i<temp.size();i++){
            if(temp[i]>0){
                p.push(temp[i]);
            }
        }
        if(p.empty()){
            time=time+temp.size();
        }else{
            time=time+n+1;
        }


    }
    return time;

    }
};
 