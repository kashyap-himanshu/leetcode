class Solution {
public:
    string reverseVowels(string s) {
        string v;
        int i=0;
        set<char> p;
        p.insert('a');
        p.insert('e');
        p.insert('i');
        p.insert('o');
        p.insert('u');
        map<char,int> f;
        while(i<s.length()){
            f[s[i]]=i;
            char c=tolower(s[i]);
            if(p.find(c)!=p.end()){
               v.push_back(s[i]); 
            }
            i++;
        }
        reverse(v.begin(),v.end());
        int j=0;
        i=0;
        while(i<s.length()){
            char c=tolower(s[i]);
            if(p.find(c)!=p.end()){
                f[s[i]]=f[v[j]];
                swap(v[j],s[i]);
                f[v[j]]=i;
                j++;
            }
            i++;
        }
        return s;
    }
};