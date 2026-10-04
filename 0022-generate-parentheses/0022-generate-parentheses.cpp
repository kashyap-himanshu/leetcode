class Solution {
public:
void fun(int n,int l,int r,vector<string>& ans,string &temp){
    if(l==n && r==n){
        ans.push_back(temp);
    }
    if(l<n){
        temp.push_back('(');
        fun(n,l+1,r,ans,temp);
        temp.pop_back();
    }
    if(r<l){
        temp.push_back(')');
          fun(n,l,r+1,ans,temp);
        temp.pop_back();
    }
}
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp;
        fun(n,0,0,ans,temp);
        return ans;
        
    }
};