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

// Reverse Link List Iterative solution 
ListNode * ReverseIterative(ListNode * head){
    ListNode  * curr = head;
    ListNode * prev = NULL;

    while(curr != NULL){
        ListNode * temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

// Reverse Link List Recursive Soluion
ListNode * ReverseRecursive(ListNode * head){
    // base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    // recurive case
    // 1. in this, we reverse the sublist that comes after the head node
    ListNode* revhead = ReverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;
    return revhead;
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

    // Reverse Link list Iterative
    head = ReverseIterative(head);
    PrintLinkList(head);


   // Reverse Link list recursive
   head = ReverseRecursive(head);
   PrintLinkList(head);
    return 0;
}