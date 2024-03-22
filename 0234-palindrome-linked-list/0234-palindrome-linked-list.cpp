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
    bool help(ListNode *&head, ListNode *temp){
        if(temp==NULL){
            return true;
        }
        bool flag=help(head,temp->next);
        if(head==NULL){
            return false;
        }
        if(head->val!=temp->val){
            head->next=NULL;
            return false;
        }
        head=head->next;
        return flag;
    }
    bool isPalindrome(ListNode* head) {
        return help(head,head);    
    }
};