class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        stack<int> s;
        vector<string> hima;
        int i=0;
        int j=1;
        while(j<=n && i<target.size()){
            if(target[i]==j){
                hima.push_back("Push");
                i++;
                j++;
               
            }else{
                 hima.push_back("Push");
                 hima.push_back("Pop");
                
                 j++;
            }
           


        }
        return hima;


    }
};