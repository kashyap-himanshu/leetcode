/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head->next->next==NULL) return{-1,-1};
        int count=1;
        int points=0;
        int ans1=-1;
        int ans2=-1;
        int ans3=-1;
        int mini=INT_MAX;

        ListNode *prev=head,*curr=head->next;
        while(curr->next!=NULL){
            count++;
            ListNode* agla=curr->next;
            if(curr->val > agla->val && curr->val>prev->val ){
                points++;
                if(points==1){
                    ans1=count;
                }
                ans2=ans3;
                ans3=count;
                  if(points>=2){
                    mini=min(mini,ans3-ans2);
                }
            }
             if(curr->val < agla->val && curr->val< prev->val ){
                points++;
                if(points==1){
                    ans1=count;
                }
                ans2=ans3;
                ans3=count;
                if(points>=2){
                    mini=min(mini,ans3-ans2);
                }
            }
            prev=curr;
            curr=agla;
        
        }
        if(points<=1){
            return {-1,-1};
        }
        return {mini,ans3-ans1};

        
    }
};