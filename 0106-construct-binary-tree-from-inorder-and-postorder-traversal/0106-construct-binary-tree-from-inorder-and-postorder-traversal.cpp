
class Solution {
public:
TreeNode* fun(vector<int> &inorder,vector<int>&postorder,int &i,int startpos,int endpos,map<int,int> &f){
    if(i<0 || startpos>endpos){
        return NULL;
    }
    int element=postorder[i];
    i--;
    TreeNode* root=new TreeNode();
    root->val=element;
     root->right=fun(inorder,postorder,i,f[element]+1,endpos,f);
    root->left=fun(inorder,postorder,i,startpos,f[element]-1,f);
    
    return root;
}
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int> f;
        for(int i=0;i<inorder.size();i++){
            f[inorder[i]]=i;
        }
        int startpos=0;
        int endpos=inorder.size()-1;
        int index=postorder.size()-1;
        return fun(inorder,postorder,index,startpos,endpos,f);
        
    }
};