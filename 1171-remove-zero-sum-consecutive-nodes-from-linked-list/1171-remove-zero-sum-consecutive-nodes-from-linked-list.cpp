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
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* temp=new ListNode(0);
        temp->next=head;
        int prev=0;
        unordered_map<int,ListNode*>map;
        map[0]=temp;
        while(head!=NULL){
            prev+=head->val;
            map[prev]=head;
            head=head->next;
        }
        head=temp;
        prev=0;
        while(head!=NULL){
            prev+=head->val;
            head->next=map[prev]->next;
            head=head->next;
        }
        return temp->next;
    }
};