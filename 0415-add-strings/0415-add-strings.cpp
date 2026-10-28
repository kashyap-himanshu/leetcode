class Solution {
public:
    string addStrings(string num1, string num2) {
        string ans;
        int i=num1.length()-1;
        int j=num2.length()-1;
        int carry=0;
        while(i>=0 && j>=0){
            int fir=num1[i]-'0';
            int sec=num2[j]-'0';
            int sum=fir+sec+carry;
            int n=sum%10;
            char c=n+'0';
            ans.push_back(c);
            carry=sum/10;
            i--;
            j--;
        }
        while(i>=0){
          int sum=num1[i]-'0'+carry;
          int n=sum%10;
          carry=sum/10;
          char c=n+'0';
          ans.push_back(c);
          i--;

        }
        while(j>=0){
          int sum=num2[j]-'0'+carry;
          int n=sum%10;
          carry=sum/10;
          char c=n+'0';
          ans.push_back(c);
          j--;

        } if(carry>0){
            ans.push_back(carry+'0');
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};