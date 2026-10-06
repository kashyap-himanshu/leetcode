class Solution {
public:
    int minAddToMakeValid(string s) {
        vector<char> hima;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                hima.push_back('(');
            }else{
                if(hima.size()>0 && hima.back()=='('){
                    hima.pop_back();
                }else{
                    hima.push_back(')');
                }
            }
        }
        return hima.size();
        
    }
};