class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,vector<int>> f;
        int c=0;
        for(int i=0;i<nums.size();i++){
            f[nums[i]].push_back(i);
        }
        for(auto it:f){
            vector<int> temp=it.second;
            int a=-1;
            int b=-1;
            bool ans=false;
            if(temp.size()>=3){
                for(int i=1;i<temp.size();i++){
                    a=b;
                    b=temp[i]-temp[i-1];
                    if(i>1 && a!=b){
                        ans=true;
                        break;}

                }
                if(ans==false)c++;
                
            }
        }
        return c;
        
    }
};