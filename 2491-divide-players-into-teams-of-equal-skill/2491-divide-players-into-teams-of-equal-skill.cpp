class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());

        int n=skill.size();
        int j=n-1;
        int i=0;
        int sum=0;
        long long int ans=0;
        while(i<j){
            if(i>0){
              if(sum==skill[i]+skill[j])ans+=skill[i]*skill[j];
              else break;


            }else{
                int m=skill[i]+skill[j];
                sum=m;
                ans+=skill[i]*skill[j];
            }
            i++;
            j--;
        }
        if(i<j)return -1;
        return ans;
        
    }
};