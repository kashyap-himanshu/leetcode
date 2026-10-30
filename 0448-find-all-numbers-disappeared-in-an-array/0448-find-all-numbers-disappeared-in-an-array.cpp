class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            int e=abs(nums[i]);
            int m=abs(nums[e-1]);
            nums[e-1]=-m; 
        }
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
        
    }
};