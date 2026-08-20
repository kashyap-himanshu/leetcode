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

TreeNode* lc(TreeNode* root,int i,int h){
    if(root==NULL) return NULL;
    if(i==h) return root;
    TreeNode* left=lc(root->left,i+1,h);
    TreeNode* right=lc(root->right,i+1,h);
    if(left !=NULL && right!=NULL){
        return root;
    }else if(left==NULL|| right==NULL){
        if(left!=NULL) return left;
        else{
            return right;
        }
    }
    return NULL;

}
int fun(TreeNode* root){
    if(root==NULL) return 0;
    int left=fun(root->left);
    int right=fun(root->right);

    int self=max(left,right)+1;
    return self;
}
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        int h=fun(root);
       return lc(root,1,h);
        
       
        
        
    }
};