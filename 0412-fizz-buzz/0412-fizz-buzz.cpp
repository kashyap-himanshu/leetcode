class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        int i=0;
        while(i<n){
            if((i+1)%3==0 && (i+1)%5==0){
                ans.push_back("FizzBuzz");
            }else if((i+1)%3==0){
                ans.push_back("Fizz");
            }else if((i+1)%5==0){
                ans.push_back("Buzz");
            }else{
                
                ans.push_back(to_string(i+1));
            }
            i++;
        }
        return ans;

        
    }
};