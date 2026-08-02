class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int res=0;
        int low=0;
        int i=0;
        int j=1;
        for(int k=2;k<nums.size();k++){

            if(nums[k]==nums[i]+nums[j]){
                res=max(res,k-low+1);
                i++;
                j++;
                
            }else{
                i++;
                j++;
                low=i;
            }
        }
        if( res==0){
            return 2;
             
        }
        return res;
        
    }
};