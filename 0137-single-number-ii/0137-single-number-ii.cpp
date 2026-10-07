class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
       for(int bit=0;bit<32;bit++){
        int count=0;
        for(int i=0;i<nums.size();i++){
            count+=(nums[i]>>bit)&1;
        }
        if(count%3==1){
            ans+=(1<<bit);
        }
       }
       return ans;


        
    }
};