class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> f;
        map<string,char> g;

        string word;
        vector<string> v;

        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                v.push_back(word);
                word="";
            }
            else{
                word+=s[i];
            }
        }

        v.push_back(word);

        if(pattern.length()!=v.size()) return false;

        for(int i=0;i<pattern.length();i++){

            char ch=pattern[i];
            string str=v[i];

            if(f.find(ch)!=f.end()){
                if(f[ch]!=str) return false;
            }
            else{
                f[ch]=str;
            }

            if(g.find(str)!=g.end()){
                if(g[str]!=ch) return false;
            }
            else{
                g[str]=ch;
            }
        }

        return true;
    }
};