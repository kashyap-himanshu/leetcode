class Solution {
public:
    int minSwaps(vector<int>& nums) {
          priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> p;
          map<int ,int> f;
          for(int i=0;i<nums.size();i++){
            int n=nums[i];
            int s=0;
            while(n>0){
                int d=n%10;
                n=n/10;
                s+=d;
            }
            p.push({s,nums[i]});
            f[nums[i]]=i;
        }

        int c=0;
        int i=0;
        while(!p.empty()){
            if(nums[i]!=p.top().second){
                c++;
                int ele=p.top().second;
                int t=nums[i];
                swap(nums[i],nums[f[ele]]);
                f[t]=f[nums[i]];
            }
            p.pop();
            i++;
        }
        return c;
        
        
    }
};