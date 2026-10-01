class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> a(26,0);
        char c;
        for(int i=0;i<s.length();i++){
            a[s[i]-97]++;
        }
        for(int i=0;i<t.length();i++){
            if(a[t[i]-97]>=1){
                a[t[i]-97]--;
            }else{
                c=t[i];
            }
        }
        return c;

        
    }
};