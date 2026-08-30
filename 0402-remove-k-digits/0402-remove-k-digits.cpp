class Solution {
public:
    string removeKdigits(string num, int k) {
        string s;
        for(int i=0;i<num.length();i++){
            while(!s.empty() && k>0 && s.back()>num[i]){
                s.pop_back();
                k--;
            }
            s.push_back(num[i]);
        }

        while(k>0){
            s.pop_back();
            k--;
        }
        int i=0;
        while(i<s.length()&&s[i]=='0'){
            i++;
           
        }
       s= s.substr(i,s.length()-i);
        if(s.empty()) return"0";
        return s;

    }
};