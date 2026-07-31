class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int> left(n);
        vector<int> right(n);

        int leftmax=height[0];
        left[0]=leftmax;
        for(int i=1;i<n;i++){
            leftmax=max(leftmax,height[i]);
            left[i]=leftmax;
        }
        int rightmax=height[n-1];
        right[n-1]=rightmax;
        for(int i=n-2;i>=0;i--){
            rightmax=max(rightmax,height[i]);
            right[i]=rightmax;
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans+min(left[i],right[i])-height[i];
            

        }
        return ans;


        
        
    }
};