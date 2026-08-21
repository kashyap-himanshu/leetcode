
class Solution {
public:
TreeNode* fun(vector<int>&pre,vector<int> &in,int startpos,int endpos,int &i,map<int,int>&f){
    if(i==pre.size()||startpos>endpos){
        return NULL;
    }
    int element=pre[i];
    i++;
    TreeNode* root=new TreeNode();
    root->val=element;
    root->left=fun(pre,in,startpos,f[element]-1,i,f);
    root->right=fun(pre,in,f[element]+1,endpos,i,f);
     return root;
}
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        map<int,int> f;
        for(int i=0;i<inorder.size();i++){
            f[inorder[i]]=i;
        }
        int startpos=0;
        int endpos=inorder.size()-1;
        int index=0;
        TreeNode* ans=fun(preorder,inorder,startpos,endpos,index,f);
        return ans;

        
    }
};