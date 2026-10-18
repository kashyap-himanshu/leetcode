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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* dummy1=new ListNode();
        dummy1->val=0;
        ListNode* dummy2=new ListNode();
        dummy2->val=0;
        int i=0;
        ListNode* odd=dummy1;
        ListNode* even=dummy2;

         while(head!=NULL){
            if(i%2==0){
                odd->next=head;
                odd=odd->next;
            }else{
                even->next=head;
                even=even->next;
            }
            i++;
            head=head->next;

        }
        odd->next=dummy2->next;
        even->next=NULL;
        return dummy1->next;

        
    }
};