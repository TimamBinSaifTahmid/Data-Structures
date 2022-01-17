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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left==right)
            return head;
        else{
            ListNode* prevOfLeftN;
            ListNode* rightN;
            ListNode* leftN;
            ListNode*currentN;
            ListNode* prevN;
            ListNode*tempN;
            currentN=head;
            tempN=currentN;
            if(left==1){
                leftN=head;
                prevOfLeftN=leftN;
            }

             bool b=false;
             //finding left node and right node
             for(int i=1;i<=right;i++){
                 prevN=currentN;
                 currentN=currentN->next;
               if(i==left-1){
                   prevOfLeftN=prevN;
                   leftN=currentN;
               }
               else if(i==right)
                   rightN=prevN;

             }


            prevN=leftN;
            currentN=prevN->next;
            if(right-left>=2)
                tempN=currentN->next;

                //linking the next node of right node with left node
             leftN->next=rightN->next;

           //reverting the link list in the given range
            for(int i=left;i<right-1;i++){
                currentN->next=prevN;
                prevN=currentN;
                currentN=tempN;
                tempN=tempN->next;

            }
            currentN->next=prevN;


            //if left ==1 then the right node will be the first node
            if(left==1){
                head=rightN;
            }

            //linking previous node of left node with right node
            else
            prevOfLeftN->next=rightN;


        }
        return head;
    }
};
