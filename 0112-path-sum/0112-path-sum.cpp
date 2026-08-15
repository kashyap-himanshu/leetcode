/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum=0;
    bool ans=false;
void fun(vector<int> &hima,TreeNode* root,int targetsum){
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL){
        sum=sum+root->val;
        hima.push_back(root->val);
        
        if(sum==targetsum){
            ans=true;
        }
        sum=sum-root->val;
        hima.pop_back();
        
        return;
    }
    sum=sum+root->val;
    hima.push_back(root->val);
    
     fun(hima,root->left,targetsum);
     

    fun(hima,root->right,targetsum);
    sum=sum-hima.back();
       hima.pop_back();

    
}
    bool hasPathSum(TreeNode* root, int targetsum){
        vector<int> hima;
        fun(hima,root,targetsum);
        return ans;
        
    }
};