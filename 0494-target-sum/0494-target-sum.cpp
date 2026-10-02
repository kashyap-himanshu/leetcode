class Solution {
public:
int fun(vector<int>&nums,int target,vector<vector<int>> &dp,int n,int i,int sum,int tot){
    if(i==n && target==sum){
        return 1;
    }
    if(i==n)return 0;
    // if(dp[i][sum+tot]!=-1){
    //     return dp[i][sum+tot];
    // }
    int yes=fun(nums,target,dp,n,i+1,sum+nums[i],tot);
    int no=fun(nums,target,dp,n,i+1,sum-nums[i],tot);
   // dp[i][sum+tot]=yes+no;
    return yes+no;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        int n=nums.size();
        int tot=0;
        for(int i=0;i<nums.size();i++){
            tot+=nums[i];
        }
        if(target>tot || target<-tot)return 0;
        vector<vector<int>>dp(n,vector<int>(2*(tot)+1,-1));
        return fun(nums,target,dp,n,0,0,tot);
        
    }
};