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
bool ans=true;
void fun(TreeNode* root,long long mini,long long maxi){
   if(root==NULL) return;
   if(root->val<=mini|| root->val>=maxi) ans=false;

   fun(root->left,mini,root->val);
   fun(root->right,root->val,maxi);
  
   return;
}
    bool isValidBST(TreeNode* root) {
       fun(root,LLONG_MIN,LLONG_MAX);
       return ans;
        
    }
};