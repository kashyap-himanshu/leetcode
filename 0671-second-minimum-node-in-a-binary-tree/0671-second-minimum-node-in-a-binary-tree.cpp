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
 set<int> s;
 void fun(TreeNode* root){
    if(root==NULL)return;
    s.insert(root->val);
    fun(root->left);
    fun(root->right);
    
    return;
     
 }
    int findSecondMinimumValue(TreeNode* root) {
        if(root->left==NULL && root->right==NULL)return -1;
       
        fun(root);
       int ans=-1;
       int c=0;

        while(!s.empty()){
          ans=*s.begin();
          s.erase(ans);
          c++;
          if(c==2)break;
        }
        if(c==2)return ans;
        return -1;

    }
};