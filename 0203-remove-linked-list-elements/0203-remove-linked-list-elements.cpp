#define node ListNode
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        node* dummy=new node();
        dummy->val=-1;
        node* prev=dummy;
        
        while(head!=NULL){
         
            if(head->val==val){
                head=head->next;

            }else{
                prev->next=head;
                prev=head;
                head=head->next;
            }
        }
        prev->next=NULL;

        return dummy->next;
        
        
    }
};