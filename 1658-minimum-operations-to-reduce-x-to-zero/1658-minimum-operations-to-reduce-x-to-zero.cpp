class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
        }

        int target=sum-x;

        if(target<0)return -1;
        if(target==0)return nums.size();

        int low=0;
        int high=0;
        int s=0;
        int ans=-1;

        while(high<nums.size()){
            s=s+nums[high];

            while(low<=high && s>target){
                s=s-nums[low];
                low++;
            }

            if(s==target){
                ans=max(ans,high-low+1);
            }

            high++;
        }

        if(ans==-1)return -1;

        return nums.size()-ans;
    }
};