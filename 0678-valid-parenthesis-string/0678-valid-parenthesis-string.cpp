class Solution {
public:
// b-use for balancing open and close bracket
bool fun(string s,int n,int b,int i,vector<vector<int>> &dp){ 
    if(b<0)return false;
    if(i==n && b==0)return true;
    if(i==n) return false;
    if(dp[i][b]!=-1){
        return dp[i][b];
    }

    if( s[i]==')'){ //for case 1
      
       return dp[i][b]=fun(s,n,b-1,i+1,dp);
    }
     if(s[i]=='('){  //for case 2
       return dp[i][b]=fun(s,n,b+1,i+1,dp);
    }
     
     //for case 3
    bool no=fun(s,n,b,i+1,dp);  //it is for *->" "

    bool yes=fun(s,n,b+1,i+1,dp); //it is for *->'('

    bool mid=fun(s,n,b-1,i+1,dp);  //it is for *->')'
    
    dp[i][b]=yes||no||mid;
    return yes||no||mid;
}
    bool checkValidString(string s) {
        int n=s.length();
        if(s[0]==')')return false;

        vector<vector<int>>dp(n,vector<int>(n+1,-1));  //for memoization
      
       return fun(s,n,0,0,dp);

        
    }
};