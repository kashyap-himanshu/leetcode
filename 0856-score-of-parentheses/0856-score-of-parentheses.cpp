class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> p;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                p.push(0);
            }
            else if(s[i]==')'){
                if(p.top()==0){
                    p.pop();
                    p.push(1);
                }else{
                    int score=0;
                    while(p.top()!=0){
                    score+=p.top();
                    p.pop();
                }
                p.pop();
                p.push(2*score);
                }
            }
        }
        int ans=0;
        while(!p.empty()){
            int k=p.top();
            ans+=k;
            p.pop();

        }
        return ans;

        
    }
};