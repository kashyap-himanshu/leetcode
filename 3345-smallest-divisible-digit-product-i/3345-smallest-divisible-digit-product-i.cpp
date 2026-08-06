class Solution {
public:
    int smallestNumber(int n, int t) {
       
        
        while(n){
            int real=n;
            int prod=1;
          
            int digit=n%10;
            if(digit==0){
                return n;
            }
             n=n/10;
            if(n==0){
                prod=prod*digit;
                if(prod%t==0){
                    return real;
                }
                n=real+1;
                continue;
            }
            
            int digit1=n%10;
            prod=prod*digit*digit1;
            if(prod%t==0){
                return real;
            }
            n=real+1;      

        }
        return -1;
        
        
    }
};