class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            int index=s[i]-97;
            int pos=26-index;
            int prod=pos*(i+1);
            sum=sum+prod;
        }
        return sum;
    }
};