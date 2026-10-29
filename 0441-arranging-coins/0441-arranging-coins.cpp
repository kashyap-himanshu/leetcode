class Solution {
public:
    int arrangeCoins(int n) {
        int count =0;
        int i=1;
        while(n>0){
            if(n>=i){
                n=n-i;
                count++;
            }else{
                n=0;
            }
            i++;
        }
        return count;
        
    }
};