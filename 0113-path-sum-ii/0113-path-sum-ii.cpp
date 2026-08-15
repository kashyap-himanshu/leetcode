
class Solution {
public:
int sum=0;
void fun(vector<int> &ans,vector<vector<int>> &hima,TreeNode* root,int targetsum){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        sum=sum+root->val;
        ans.push_back(root->val);
        if(sum==targetsum){
            hima.push_back(ans);
        }
        sum=sum-root->val;
        ans.pop_back();
        return;
    }
    sum=sum+root->val;
    ans.push_back(root->val);
     fun(ans,hima,root->left,targetsum);
     

    fun(ans,hima,root->right,targetsum);
    sum=sum-ans.back();
    ans.pop_back();
    
}
    vector<vector<int>> pathSum(TreeNode* root, int targetsum) {
        vector<vector<int>> hima;
        vector<int> ans;
        fun(ans,hima,root,targetsum);
        return hima;
        
    }
};