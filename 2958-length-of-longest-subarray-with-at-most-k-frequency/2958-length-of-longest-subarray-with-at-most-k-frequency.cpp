class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int low=0,high=0;
        unordered_map<int,int> hima;
        int res=0;
        while(high<nums.size()){
            hima[nums[high]]++;
            while(hima[nums[high]]>k){
                hima[nums[low]]--;
                if(hima[nums[low]]==0){
                    hima.erase(nums[low]);
                }
                low++;
            }
            res=max(res,high-low+1);
            high++;

        }
        return res;
        
    }
};