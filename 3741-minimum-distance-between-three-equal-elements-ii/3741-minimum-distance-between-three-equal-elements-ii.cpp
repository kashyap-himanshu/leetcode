class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>> f;
        int res=INT_MAX;
        for(int i=0;i<nums.size();i++){
            f[nums[i]].push_back(i);
        }
        for(auto it:f){
            if(it.second.size()>=3){
                int n=it.second.size();
                for(int i=0;i<n-2;i++){
                    int l=it.second[i];
                   int j=it.second[i+1];
                   int k=it.second[i+2];
                    int sum=abs(l-j)+abs(j-k)+abs(l-k);
                    res=min(res,sum);
                }
            }
        }
        if(res==INT_MAX)return -1;
        return res;


        
    }
};