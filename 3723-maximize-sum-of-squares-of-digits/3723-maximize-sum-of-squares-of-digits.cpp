class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
       if(sum>9*num){
        return "";
       }
       string s;
       while(sum>=10){
        s.push_back(9+'0');
        num=num-1;
        sum=sum-9;
       }
       if(num>0 && sum<=9){
          s.push_back(sum+'0');
          num=num-1;
       }
       while(num>0){
        s.push_back('0');
        num=num-1;
       }
       return s;
        
    }
};