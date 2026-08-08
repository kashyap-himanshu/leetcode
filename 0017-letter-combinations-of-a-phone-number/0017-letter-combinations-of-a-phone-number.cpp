class Solution {
public:
void lc(string &digits,string &ans,unordered_map<char,string> &hima,vector<string> &res,int idx){
    if(ans.length()==digits.length()){
        res.push_back(ans);
        return;
    }
    string choice=hima[digits[idx]];
    for(int i=0;i<choice.length();i++){
        ans.push_back(choice[i]);
         lc(digits,ans,hima,res,idx+1);
         ans.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string> hima;
       hima['2']="abc";
       hima['3']="def";
       hima['4']="ghi";
       hima['5']="jkl";
       hima['6']="mno";
       hima['7']="pqrs";
       hima['8']="tuv";
       hima['9']="wxyz";
        string ans;
        vector<string> res;
        lc(digits,ans,hima,res,0);
        return res; 
    }
};