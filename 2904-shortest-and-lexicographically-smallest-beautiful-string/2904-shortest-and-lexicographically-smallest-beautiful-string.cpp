class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string m;
        int length=INT_MAX;
        int idx=-1;
        int low=0;
        int count=0;
        for(int high=0;high<s.length();high++){
            if(s[high]=='1') count++;
            while( count==k){
                if(length>(high-low+1)){
                    idx=low;
                    length=min(length,high-low+1);
                    m=s.substr(idx,length);
                }
                else if(length==(high-low+1) ){
                    string temp=s.substr(low,length);
                    if(temp<m){
                        m=temp;
                    }

                }
                
                if(s[low]=='1') count--;

                low++;
            }

        }
        if(idx==-1) return "";
        
        return m;
        
    }
};