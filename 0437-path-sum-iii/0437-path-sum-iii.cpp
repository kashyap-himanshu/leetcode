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
void fun(TreeNode* root,int targetsum,int &count,vector<int> path){
    if(root==NULL) return;
    path.push_back(root->val);
    fun(root->left,targetsum,count,path);
    fun(root->right,targetsum,count,path);
    int size=path.size();
    long long sum=0;
    for(int i=size-1;i>=0;i--){
        sum+=path[i];
        if(sum==targetsum) count++;
    }
    path.pop_back();
    return;


}
    int pathSum(TreeNode* root, int targetsum) {
        vector<int> path;
        int count=0;
        fun(root,targetsum,count,path);
        return count;    
    }
};