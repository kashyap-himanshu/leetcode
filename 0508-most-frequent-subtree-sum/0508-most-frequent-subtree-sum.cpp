
class Solution {
public:
int fun(TreeNode* root,unordered_map<int,int> &f){
    if(root==NULL) return 0;

    int left=fun(root->left,f);
    int right=fun(root->right,f);

    int total=left+right+root->val;
    f[total]++;
    return total;
}
    vector<int> findFrequentTreeSum(TreeNode* root) {
        unordered_map<int,int> f;
        vector<int> hima;
        fun(root,f);
        int maxi=0;
        for(auto it:f){
            maxi=max(maxi,it.second);
        }
        for(auto it:f){
            if(it.second==maxi)
            hima.push_back(it.first);
        }
        return hima;
        
    }
};