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
bool is(TreeNode *root,TreeNode* subroot){
    if(root==NULL && subroot==NULL){
        return true;
    }
    if(root==NULL || subroot==NULL){
        return false;
    }
    if(root->val!=subroot->val){
        return false;
    }
    bool r1=is(root->left,subroot->left);
    bool r2=is(root->right,subroot->right);

    if(r1==true && r2==true){
        return true;
    }
    return false;
}
  
    bool isSubtree(TreeNode* root, TreeNode* subroot) {
        if(root==NULL && subroot==NULL) return true;
        if(root==NULL || subroot==NULL){
            return false;
        }
        if(root->val==subroot->val){
            if(is(root,subroot)){
                return true;
            }
        }
     bool r1=   isSubtree(root->left,subroot);
      bool r2=  isSubtree(root->right,subroot);
      if(r1||r2){
        return true;
      }
      return false;
    

        
        
    }
};