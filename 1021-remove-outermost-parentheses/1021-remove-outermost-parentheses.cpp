class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int i=0;
        int count=0;
        while(i<s.length()){
            if(s[i]=='('&& count==0){
                count++;
            }else if(s[i]=='(' && count>0){
                ans.push_back(s[i]);
                count++;
            }else if(s[i]==')'&& count>0){
                 if(count>1){
                    ans.push_back(s[i]);
                    count--;
                 }else {
                    count =0;
                 }
            }
            i++;

        }
        return ans;
        
    }
};