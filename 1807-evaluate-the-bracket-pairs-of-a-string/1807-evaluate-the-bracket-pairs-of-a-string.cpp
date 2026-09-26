class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> f;
        for(int i=0;i<knowledge.size();i++){
            string key=knowledge[i][0];
            string value=knowledge[i][1];
            f[key]=value;
        }
        string ans;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                i++;
                string mid;
                while(i<s.length() && s[i]!=')'){
                    mid.push_back(s[i]);
                    i++;
                }
                if(f.find(mid)!=f.end()){
                    string v=f[mid];
                    ans+=v;
                }else{
                    ans.push_back('?');
                }
            }else{
                ans.push_back(s[i]);
            }

        }
        return ans;
        
    }
};