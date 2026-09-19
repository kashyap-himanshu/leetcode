class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        int carry = 0;
        string s = "";

        while(i >= 0 || j >= 0 || carry) {
            int sum = carry;

            if(i >= 0)
                sum = sum + (a[i]-'0');

            if(j >= 0)
                sum = sum + (b[j]-'0');

            s = char((sum%2)+'0') + s;

            carry = sum/2;

            i--;
            j--;
        }

        return s;
    }
};