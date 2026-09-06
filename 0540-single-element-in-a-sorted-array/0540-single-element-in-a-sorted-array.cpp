class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
         int low=0;
         int high=nums.size()-1;
         while(low<=high){
            int mid=low+(high-low)/2;
            if(mid==0 && nums[mid]!=nums[mid+1]) return nums[mid]; //if first place 
            else if(mid==nums.size()-1 && nums[mid]!=nums[mid-1]) return nums[mid];//if last place
            else if(nums[mid]!=nums[mid+1] && nums[mid]!=nums[mid-1]) return nums[mid];//if in middle
            else if(nums[mid]!=nums[mid+1] && mid%2!=0) low=mid+1;
            else if(nums[mid]==nums[mid+1] && mid%2==0) low=mid+1;
            else high=mid-1;

         }
         return -1;

         
        
    }
};