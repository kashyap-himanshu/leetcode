class Solution {
public:
    int minMoves(vector<int>& nums) {
        int max_ele=*max_element(nums.begin(),nums.end());
        int c=0;
        for(int i=0;i<nums.size();i++){
            c+=max_ele-nums[i];
        }
        return c;
        
    }
};