class Solution {
public:
void cmb(vector<int> &nums,vector<int> &ans,vector<vector<int>> &hima,int i,int k){
    if(i==nums.size()){
        if(ans.size()==k){
            hima.push_back(ans);
            
        }
        return;
        }

        ans.push_back(nums[i]);
        cmb(nums,ans,hima,i+1,k);

        ans.pop_back();
        cmb(nums,ans,hima,i+1,k);


    
}
    vector<vector<int>> combine(int n, int k) {
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            nums[i]=i+1;
        }
        vector<int> ans;
        vector<vector<int>> hima;
        cmb(nums,ans,hima,0,k);
        return hima;
        
    }
};