class Solution {
public:
    int countAsterisks(string s) {
        int pair=0;
        int count=0;
        for(int i=0;i<s.length();i++){
           if(pair==0 && s[i]=='*'){
            count++;
           }
           else if(s[i]=='|'){
            pair++;
            if(pair==2){
                pair=0;
            }
           }
        }
        return count;

        
    }
};