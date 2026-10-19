class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        int low=0,high=nums.size()-1;
        while(low<=high){
           int mid=low+(high-low)/2;
            if(nums[mid]==target){
                ans.push_back(mid);
                int t=mid;
                mid--;
                while(mid>=0 && nums[mid]==target){
                    ans.push_back(mid);
                    mid--;
                }
                t++;
                while(t<nums.size() && nums[t]==target){
                    ans.push_back(t);
                    t++;
                }
                break;

            }else if(nums[mid]>target){
                high=mid-1; 
            }else{
                low=mid+1;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};