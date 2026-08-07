class Solution {
public:
void cb(vector<int> &nums,vector<vector<int>> &ans,vector<int> &temp,int k,int n,int i,int sum){
    if(i==nums.size()){
        if(temp.size()==k && sum==n){
            ans.push_back(temp);
        }   
        return;
    
    }
    temp.push_back(nums[i]);
    sum=sum+nums[i];
     cb(nums,ans,temp,k,n,i+1,sum);
    sum=sum-nums[i];
    temp.pop_back();
    cb(nums,ans,temp,k,n,i+1,sum);
}
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> nums={1,2,3,4,5,6,7,8,9};
        vector<vector<int>> ans;
        vector<int> temp;
        
        cb(nums,ans,temp,k,n,0,0);
        return ans;
        
    }
};