class Solution {
public:
    string simplifyPath(string path) {
        string s="";
        stack<string> p;
        vector<string> hima;
        

        for(int i=0;i<path.length();i++){
           
            string token;
            while( i<path.length() && path[i]!='/'){
                 token.push_back(path[i]);
                 i++;
            }
            int j=0;
             if( !p.empty() && token.length()>0 && token==".." ){
                p.pop();
                
            }else if(token.length()>0 && token[j]=='.' && token.length()==1 ){
                continue;
            } else if(token.length()>0 &&token!=".." ){
                p.push(token);
            }
          
        }
        while(!p.empty()){
            hima.push_back(p.top());
            p.pop();
        }
        reverse(hima.begin(),hima.end());
        for(int i=0;i<hima.size();i++){
            s=s+"/"+hima[i];
        }
        if(hima.size()==0){
            return "/";
        }
        return s;
        


        
            
        
    }
};