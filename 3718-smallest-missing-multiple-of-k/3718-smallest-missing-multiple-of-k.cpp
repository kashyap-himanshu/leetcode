class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%k==0){
                s.insert(nums[i]/k);
            }
        }
        int j=1;
        while(true){
            if(!s.count(j)) break;
            j++;

        }
        return j*k;
        
    }
};