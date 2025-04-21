#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode * next;

    ListNode (int val){
        this->val = val;
        this->next = NULL;
    }
};

void InsertionAtHead(ListNode *& head, int val){
    ListNode*n = new ListNode(val);
    n->next = head;
    head = n;
}

void PrintLinkList(ListNode * head){
    while(head != NULL){
        cout << head->val <<" ";
        head = head-> next;
    }
}

ListNode * KthNodeFromEnd(ListNode* head, int k){
    ListNode * fast = head;
    ListNode * slow = head;

    int i = 1;
    // fast move K steps forward, slow is still on head.
    while(i <= k){
        fast = fast->next;
        i++;
    }

    // now both move one one steps forward, untio fast reaches to NULL and after that slow reaches to Kth eleement from end
    while(fast != NULL){
        fast = fast->next;
        slow = slow->next;
    }

    return slow;
}       

int main()
{
    
    ListNode * head = NULL; 
    InsertionAtHead(head, 50);
    InsertionAtHead(head, 40);
    InsertionAtHead(head, 30);
    InsertionAtHead(head, 20);
    InsertionAtHead(head, 10);

    PrintLinkList(head);
    cout << endl;

    int k = 2;
    ListNode * kth = KthNodeFromEnd(head, k);
    cout << kth->val;
 return 0;
}