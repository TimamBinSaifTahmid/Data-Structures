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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current=head;
        ListNode* res=head;
        if(res!=NULL){
        ListNode* prev=current;
        current=current->next;
        while(current!=NULL){




            if(prev->val==current->val){
                prev->next=current->next;


            }
             else{
                   prev=current;

               }
            current=current->next;
            }


        return res;
        }
        else
            return res;
    }
};
