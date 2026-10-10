class Solution {
public:
    int minBitFlips(int start, int goal) {
        int c=0;
        while(start>0 && goal>0){
        if((start&1)!=(goal&1))c++;
        start=start>>1;
        goal=goal>>1;
        }

        if(start>0){
            while(start>0){
                if(start&1==1)c++;
                start=start>>1;
            }
        }
        if(goal>0){
            while(goal>0){
                if(goal&1==1)c++;
                goal=goal>>1;
            }
        }
        return c;

        
    }
};