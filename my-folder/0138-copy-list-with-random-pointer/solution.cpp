/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        if(head==NULL)
            return head;
        Node *h=head;
        while(head!=NULL)
        {
            Node *n = new Node(head->val);
            n->next=head->next;
            head->next=n;
            head=n->next;
        }
        head=h;
        while(head!=NULL)
        {
            if(head->random!=NULL)
                head->next->random=head->random->next;
            head=head->next->next;
        }
        head=h;
        Node *l1,*newHead=h->next;
        while(head!=NULL)
        {
            l1=head->next;
            head->next=l1->next;
            if(l1->next!=NULL)
                l1->next=l1->next->next;
            head=head->next;
        }
        
        return newHead;
    }
};
