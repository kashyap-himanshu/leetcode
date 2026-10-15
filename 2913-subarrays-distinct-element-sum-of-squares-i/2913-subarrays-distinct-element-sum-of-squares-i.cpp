class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int sum=0;
        for (int i=0;i<nums.size();i++){
            set<int> s;
            int c=0;
             for(int j=i;j<nums.size();j++){
                if(s.find(nums[j])==s.end()){
                    c++;
                    s.insert(nums[j]);
                }
                 sum=sum+c*c;

             }
        }
        return sum;
        
    }
};