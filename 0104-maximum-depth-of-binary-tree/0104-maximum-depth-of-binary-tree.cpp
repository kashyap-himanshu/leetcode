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
int ans=0;
void fun(TreeNode* root,int i){
    if(root==NULL) return ;
    fun(root->left,i+1);
    fun(root->right,i+1);
    ans=max(ans,i);

}
    int maxDepth(TreeNode* root) {
        fun(root,1);
        return ans;

        
    }
};