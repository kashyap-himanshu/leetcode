
class Solution {
public:
    long long kthLargestLevelSum(TreeNode* root, int k) {
        queue<TreeNode*> q;
        priority_queue<long long> hima;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            long long sum=0;
            while(size--){
                TreeNode* front=q.front();
                q.pop();
                sum=sum+front->val;
                if(front->left){
                    q.push(front->left);
                }
                if(front->right){
                    q.push(front->right);
                }

            }
            hima.push(sum);
        }
        long long ans=-1;
        int count=0;
        while(!hima.empty()){
            count++;
            if(count==k){ ans=hima.top();
            break;}
           hima.pop();
        }
        return ans;
        
    }
};