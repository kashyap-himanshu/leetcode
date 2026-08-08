class Solution {
public:
void cb(vector<int> &ans,vector<vector<int>> &res,vector<int> &candidates,int target,int sum,int i){
    if(sum==target){
        res.push_back(ans);
        return;
    }else{
        if(i==candidates.size()){
            if(sum==target){
                res.push_back(ans);
                return;
            }
            return;
        }
    }
      
    if(sum+candidates[i]<=target){
        sum=sum+candidates[i];
        ans.push_back(candidates[i]);
        cb(ans,res,candidates,target,sum,i);
        sum=sum-candidates[i];
        ans.pop_back();
    }
    cb(ans,res,candidates,target,sum,i+1);
   


}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> ans;
        vector<vector<int>> res;
        cb(ans,res,candidates,target,0,0);
        return res;
        
    }
};