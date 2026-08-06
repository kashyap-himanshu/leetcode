class Solution {
public:
void p(vector<int> &nums,vector<int> &temp,vector<vector<int>> &res,vector<bool> &used){
    if(temp.size()==nums.size()){
        res.push_back(temp);
        return;
    }
    for(int i=0;i<nums.size();i++){
        if(used[i]){
            continue;
        }
        used[i]=true;
        temp.push_back(nums[i]);
         p(nums,temp,res,used);

         used[i]=false;
         temp.pop_back();
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> res;
        vector<bool> used(nums.size());
        p(nums,temp,res,used);
        return res;

        
    }
};