class Solution {
public:
void fun(int n,vector<int>&temp,vector<vector<int>>&ans,int i,vector<int>&nums){
    if(i==n){
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[i]);
    fun(n,temp,ans,i+1,nums);
    temp.pop_back();
    fun(n,temp,ans,i+1,nums);
    return;
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> ans;
        int n=nums.size();
        fun(n,temp,ans,0,nums);
        return ans;
        
    }
};