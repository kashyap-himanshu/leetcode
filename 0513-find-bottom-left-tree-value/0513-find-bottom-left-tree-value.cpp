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
    int findBottomLeftValue(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int ans;
        while(!q.empty()){
            int lvlsize=q.size();
            vector<int> temp(lvlsize);
            for(int i=0;i<lvlsize;i++){
                TreeNode* res=q.front();
                q.pop();
                temp[i]=res->val;
                if(res->left){
                    q.push(res->left);
                }
                if(res->right){
                    q.push(res->right);
                }
            }
            ans=temp[0];
        }  
        return ans;
    }
};