class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
       
       int ans=0;
       int j=1;
       while(j<nums.size()){
        ans+=min(nums[j],nums[j-1]);
        j=j+2;

       }
       return ans;
        
    }
};