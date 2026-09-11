class Solution {
public:
int ans=0;

void fun(vector<int> &digits,unordered_map<int,int> &f,int i,vector<bool> &vis, vector<int>&res){
    res.push_back(digits[i]);
    vis[i]=true;

    if(res.size()==3){
        if(res[0]!=0){
            int sum=0;
            for(int k=0;k<3;k++){
                sum=sum*10+res[k];
            }

            if(sum%2==0 && !f.count(sum)){
                f[sum]++;
            }
        }
        return;
    }

    for(int j=0;j<digits.size();j++){
        if(vis[j]==true)continue;

        fun(digits,f,j,vis,res);

        res.pop_back();
        vis[j]=false;
    }
}

int totalNumbers(vector<int>& digits) {
    unordered_map<int,int> f;
    vector<bool> vis(digits.size(),false);
    vector<int> res;

    for(int i=0;i<digits.size();i++){
        fun(digits,f,i,vis,res);
        res.pop_back();
        vis[i]=false;
    }

    return f.size();
}
};