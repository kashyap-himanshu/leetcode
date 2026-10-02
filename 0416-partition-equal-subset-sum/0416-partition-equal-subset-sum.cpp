class Solution {
public:
bool fun(vector<int>&nums,int n,vector<vector<int>> &dp,int tar,int i){
    if(tar==0)return true;
    if(i==n || tar<0)return false;
    if(dp[i][tar]!=-1){
        return dp[i][tar];
    }
    bool yes=fun(nums,n,dp,tar-nums[i],i+1);
    bool no=fun(nums,n,dp,tar,i+1);
    dp[i][tar]=yes||no;
    return dp[i][tar];
}
    bool canPartition(vector<int>& nums) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
        if(s%2!=0)return false;
        int tar=s/2;
        vector<vector<int>>dp(n,vector<int>(tar+1,-1));
       return fun(nums,n,dp,tar,0);
    }
};