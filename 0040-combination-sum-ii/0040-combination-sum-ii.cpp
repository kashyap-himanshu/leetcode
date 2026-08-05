class Solution {
public:
void cmb(vector<int> &nums,vector<int> &ans,vector<vector<int>> &hima,int i,int sum,int target){
    if(sum>target){
        return;
    }
    if(i==nums.size()){
        if(sum==target){
            hima.push_back(ans);
            return;
        }
        return;
    
    
    }
    ans.push_back(nums[i]);
    sum=sum+nums[i];
     cmb(nums,ans,hima,i+1,sum,target);
     sum=sum-nums[i];

      ans.pop_back();
      
      while( i+1<nums.size()&& nums[i]==nums[i+1]){
        i++;
      }
      cmb(nums,ans,hima,i+1,sum,target);


}
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        vector<vector<int>> hima;
        cmb(nums,ans,hima,0,0,target);
        return hima;
        
    }
};