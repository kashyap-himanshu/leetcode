class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> hima;
        int pre;
        int mx=nums[0];
        for(int i=0;i<nums.size();i++){
            mx=max(mx,nums[i]);
           pre= std::gcd(nums[i],mx);
           hima.push_back(pre);
        }
        sort(hima.begin(),hima.end());
        int i=0,j=hima.size()-1;
        long long ans=0;
        while(i<j){
           pre=std::gcd(hima[i],hima[j]);
           ans=ans+pre;
           i++;
           j--;

        }
        return ans;
        
    }
};