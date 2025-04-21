#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public : 
    int val;
    ListNode * next;

    ListNode (int val){
        this -> val = val;
        this -> next = NULL;   
    }
};

ListNode* InsertionAtHead(ListNode* head, int val){
    ListNode *n = new ListNode(val);  //create a new node
    n -> next = head;                //new node ke address mai ham head daal denge 
    head = n;                       // then update the head to newly strarted created node

};

void PrintLinkList(ListNode *head){
    while(head != NULL){
        cout << head -> val << " ";
        head = head -> next;
    }
    cout <<endl;
}

ListNode* getTail(ListNode* head){

    while(head->next != NULL){
        head = head->next;
    }
    return head;
}

void InsertAtEnd(ListNode*& head, int val){
    if(head == NULL){
        InsertionAtHead(head, val);
        return;
    }
    ListNode* n = new ListNode(val);
    ListNode* tail = getTail(head);
    tail->next = n;
}

ListNode* getNode(ListNode* head, int j){
    int k = 1;
    while(k <= j and head != NULL){
        head = head->next;
        k++;
    }
    return head;
}

void InsertAtIndex(ListNode *& head, int i, int val){

    if(i == 0){
        // corner case
        InsertionAtHead(head, val);
    }
    ListNode* n = new ListNode(val);
    ListNode* prev = getNode(head, i-1);
    if(prev == NULL){
        return ;
    }
    n->next = prev->next;
    prev->next  = n;
}

int main()
{
    ListNode * head  = NULL;   //Initially Linklist is empty
    head = InsertionAtHead(head, 50);
    head = InsertionAtHead(head, 40);
    head = InsertionAtHead(head, 30);
    head = InsertionAtHead(head, 20);
    head = InsertionAtHead(head, 10);

    PrintLinkList(head);

    // InsertAtEnd(head, 60);

    InsertAtIndex(head, 2, 25);
    PrintLinkList(head);


 return 0;
}