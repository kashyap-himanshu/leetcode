class Solution {
public:
    string reverseParentheses(string s) {
      stack<string> n;
      int i=0;
     while(i<s.length()){
        if(s[i]=='('){
            n.push("(");
            i++;    
        }else if(s[i]==')'){
            string ans;
           while(n.top()!="("){
             string m=n.top();
             n.pop();
            reverse(m.begin(),m.end());
            ans+=m;  
           }
           n.pop();
           n.push(ans);  
           i++;   
            }

        else{
            string a;
            while(i<s.length() && (s[i]!='(' && s[i]!=')')){
                a+=s[i];
                i++;
            }
            n.push(a);
        }
     }
     string l;
     while(!n.empty()){
        l=n.top()+l;
        n.pop();
     }
     return l;

    }
};