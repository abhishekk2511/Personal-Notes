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
ListNode * RemoveDuplicates(ListNode*head){
    ListNode * prev = head;
    ListNode *curr = head;

    while(curr != NULL){
        if(prev->val != curr->val){
            // Tract that node
            prev->next = curr; //this will store curr address to  prev->next field 
            prev = curr;        //then move pointer to current .
        }
        curr = curr->next;
    }
    prev -> next = NULL; //corner case , in this we have to set prev -> next to NULL 
    return head;
}
int main()
{
    ListNode * head = NULL; 
    InsertionAtHead(head, 50);
    InsertionAtHead(head, 50);
    InsertionAtHead(head, 40);
    InsertionAtHead(head, 30);  
    InsertionAtHead(head, 30);
    InsertionAtHead(head, 20);
    InsertionAtHead(head, 10);
    InsertionAtHead(head, 10);

    PrintLinkList(head);
    cout << endl;

    head = RemoveDuplicates(head);
    PrintLinkList(head);

    
    return 0;
}