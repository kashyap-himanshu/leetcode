class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {
        priority_queue<int> p;
        for(int i=0;i<nums.size();i++){
            p.push(nums[i]);
        }
        long long score=0;
        while(k){
            double l=p.top();
            score=score+l;
            int num=ceil(l/3);
            p.pop();
            p.push(num);
            k--;
        }
        return score;

        
        
    }
};