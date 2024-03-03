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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* traverse=head;
        int count=0;
        while(traverse!=NULL)
        {
            count++;
            traverse=traverse->next;
        }
        int pos=(count-n)+1;
        ListNode* temp=head;
        if(pos==1)
        {
            head=head->next;
            return head;
        }
        int i=1;
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        if (temp->next!=NULL)
        {
            ListNode* del;
            del=temp->next;
            temp->next=del->next;
            delete del;
        }
        else
        {
            head=NULL;
        }
        return head;
    }
};