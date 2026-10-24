class Solution {
public:
    string pushDominoes(string dominoes) {
        int prev=-1;
        for(int i=0;i<dominoes.length();i++){
            if(dominoes[i]=='.'){
                continue;
            }
            if(prev==-1){
                if(dominoes[i]=='L'){
                    for(int t=prev+1;t<i;t++){
                        dominoes[t]='L';
                    }
                    
                }
                prev=i;
            }
                else if(prev!=-1){
                   
                     if(dominoes[prev]=='R' && dominoes[i]=='L'){
                       int m=prev+1;
                       int t=i-1;
                       while(m<t){
                        dominoes[m]='R';
                        dominoes[t]='L';
                        m++;
                        t--;
                       }
                     }else if(dominoes[prev]==dominoes[i]){
                        for(int t=prev+1;t<i;t++){
                            dominoes[t]=dominoes[prev];
                        }
                     }
                       
                    prev=i;
                }
            
        }
        if(prev>-1  && dominoes[prev]=='R' ){
            for(int t=prev+1;t<dominoes.size();t++){
                dominoes[t]='R';
            }

        }

        return dominoes;
        
    }
};