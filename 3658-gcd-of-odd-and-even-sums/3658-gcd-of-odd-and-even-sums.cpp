class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int ans=INT_MIN;
        int sumodd=0,sumeven=0;
        int count=0;
        int count1=0;
        int i=1;

        while(count<n || count1<n){
            if(i%2!=0){
                count++;
                sumodd+=i;
                i++;
            }else{
                count1++;
                sumeven+=i;
                i++;
            }
        }
        for(int i=1;i<=min(sumodd,sumeven);i++){
            if(sumodd%i==0 && sumeven%i ==0){
                ans=max(ans,i);
            }
        }
        return ans;
        
    }
};