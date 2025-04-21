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

// in this , slow point to head , and fast points to one step ahead
ListNode * ComputeMidPoint(ListNode *head){
    
    // corner case if linklist is empty 
    if(head == NULL){
        return NULL;
    }
    ListNode * slow = head;
    ListNode * fast = head->next;

    while(fast != NULL and fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main()
{
    ListNode * head = NULL;

    // InsertionAtHead(head, 60);
    InsertionAtHead(head, 50);
    InsertionAtHead(head, 40);
    InsertionAtHead(head, 30);
    InsertionAtHead(head, 20);
    InsertionAtHead(head, 10);

    PrintLinkList(head);
    cout << endl;

    // slow point to head , and fast points to one step ahead
    ListNode * midpoint  = ComputeMidPoint(head);

    // If LinkList is empty, we check that mid point is not pointing to NULL
    if(midpoint != NULL){
        cout <<midpoint -> val ;
    }
    else{
        cout << "LL is empty";
    }

 return 0;
 
}