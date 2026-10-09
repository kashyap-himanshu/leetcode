class Solution {
public:
    int minInsertions(string s) {
        int res=0;
        int i=0;
        int count=0;
        stack<char> p;
        while(i<s.length()){
            if(s[i]=='('){
                p.push(s[i]);
            }else if(s[i]==')'){
                if(p.empty() ){
                    res++;
                    i++;
                    if(i<s.length() && s[i]!=')'){
                        res++;
                        p.push(s[i]);

                    }else if(i==s.length()){

                        res++;}
                }else if(p.top()=='('){
                    i++;
                    if(i<s.length() && s[i]==')'){
                        p.pop();
                    }else if(i<s.length() && s[i]=='('){
                        p.pop();
                        res++;
                        p.push(s[i]);
                    }else if(i==s.length()){
                        p.pop();
                        res++;
                    }
                }
            }
            i++;
               
        
        
        }
        while(!p.empty()){
            if(p.top()=='('){
                res+=2;
            }
            p.pop();
        }
      
       return res;
        
    }
};