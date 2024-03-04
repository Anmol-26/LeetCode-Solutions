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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* size=head;
        int n=0;
        while(size!=NULL){
            size=size->next;
            n++;
        }
        n=n-k;
        ListNode* temp=head;
        ListNode* cur=head;
        while(n>0 || k>1){
            if(k>1){
                temp=temp->next;
                k--;
            }
            if(n>0){
                cur=cur->next;
                n--;
            }
        }
        int data=temp->val;
        temp->val=cur->val;
        cur->val=data;
        return head;
    }
};