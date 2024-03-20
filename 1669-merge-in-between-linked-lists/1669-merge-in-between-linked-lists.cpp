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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp=list1;
        ListNode* cur=list1;
        int flag=0;
        while(b+1>0 && temp!=NULL){
            if(a-1==flag){
                cur=temp;
                temp=temp->next;
            }
            else{
                temp=temp->next;
            }
            flag++;
            b--;
        }
        ListNode* head=list2;
        ListNode* head2=list2;
        while(head->next!=NULL){
            head=head->next;
        }
        cur->next=head2;
        head->next=temp;
        return list1;
    }
};