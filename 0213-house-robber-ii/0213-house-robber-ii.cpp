class Solution {
public:
int fun(vector<int> &nums,int n,int i,int free,vector<vector<vector<int>>> &dp,int yes){
    if(i==n)return 0;
    if( dp[i][free][yes]!=-1 ){
        return dp[i][free][yes];
    }
    if(free==0){
        dp[i][free][yes]=fun(nums,n,i+1,1,dp,yes);
        return dp[i][free][yes];
    } 
    if(free==1 && i==n-1 && yes==1){
        return dp[i][free][yes]=0;}
        int c1;
     if(i==0){
        
        c1=nums[i]+fun(nums,n,i+1,0,dp,1);
    }
    else{
        c1=nums[i]+fun(nums,n,i+1,0,dp,yes);
    }
    int c2=fun(nums,n,i+1,1,dp,yes);
    dp[i][free][yes]=max(c1,c2);
    return max(c1,c2);
}
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        if(n==1)return nums[0];
        vector<vector<vector<int>>> dp(
        n,vector<vector<int>>(2,vector<int>(2,-1))
    );
        return fun(nums,n,0,1,dp,0);
        
    }
};