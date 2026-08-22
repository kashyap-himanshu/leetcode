class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int prod=1;
        int k=n;
        while(n>0){
            int digit=n%10;
            sum=sum+digit;
            n=n/10;
            prod=prod*digit;
        }
        int tot=sum+prod;
        if(k%tot==0) return true;

        return false;

        
    }
};