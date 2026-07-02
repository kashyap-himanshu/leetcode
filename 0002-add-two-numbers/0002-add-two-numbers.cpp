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


        #define node ListNode
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        node* dummy=new node();
        dummy->val=0;
        node* left=dummy;
        int nums=0;
        
          
           while( l1!=NULL ||l2 !=NULL||nums !=0){
           int x=0,y=0;
           if(l1!=NULL){
            x=l1->val;
           }if(l2!=NULL){
            y=l2->val;
           }
          
             nums=(nums+x + y);
            node* dummy1=new node();
            dummy1->val=nums%10;
            nums=nums/10;
            left->next=dummy1;
            left=dummy1;
            if(l1!=NULL)
            l1=l1->next;
            if(l2!=NULL)
            l2=l2->next;
            
           }
           return dummy->next;

        

      
        
    
        
    }
};