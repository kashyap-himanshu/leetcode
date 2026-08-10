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
bool is(TreeNode* t1,TreeNode* t2){
    if(t1==NULL && t2==NULL){
        return true;
    }
    if(t1==NULL || t2==NULL){
        return false;
    }
    if(t1->val!=t2->val){
        return false;
    }
    bool r1=is(t1->left,t2->right);
    bool r2=is(t1->right,t2->left);
    if(r1==true && r2==true){
        return true;
    }else{
        return false;
    }
}
    bool isSymmetric(TreeNode* root) {
        TreeNode* t1=root->left;
        TreeNode* t2=root->right;
        if(is(t1,t2)){
            return true;
        }
        return false;
    
        
    }
};