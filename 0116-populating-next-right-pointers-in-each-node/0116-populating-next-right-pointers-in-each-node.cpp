/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* help(Node* root, Node*next){
        if(!root){
            return root;
        }
        root->next=next;
        if(next!=NULL){
            help(root->right,next->left);
        }
        else{
            help(root->right,NULL);
        }
        help(root->left,root->right);
        return root;
    }
    Node* connect(Node* root) {
        return help(root,NULL);
    }
};