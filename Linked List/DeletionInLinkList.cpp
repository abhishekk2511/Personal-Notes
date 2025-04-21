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

void InsertionAtHead(ListNode*& head, int val){
    ListNode *n = new ListNode(val);  //create a new node
    n -> next = head;                //new node ke address mai ham head daal denge 
    head = n;                       // then update the head to newly strarted created node

};

void PrintLinkList(ListNode * head){
    while(head != NULL){
        cout << head -> val << " ";
        head = head -> next;
    }
    cout <<endl;
}

void DeleteAtHead(ListNode*& head){ 
    
    // Corner Case
    if (head == NULL){
        // Linked List is empty 
        return;
    }
    ListNode* temp = head;
    head = head->next;
    delete temp;
}

void DeleteAtTail(ListNode* head){

    // corner Case
    if(head == NULL){
        // linked list is empty.
        return;
    }

    if(head->next == NULL){
        // it means there is only one element 
        // whuich is equivalent to delete head
        DeleteAtHead(head);
    }
    ListNode * prev = NULL;
    ListNode * tail = head;
    

    // this will use two pointer aproach , in this prev is one step back of tail
    // when tail-> next null pe poch  jayega to loop terminate and prev 2nd last link list element par hoga
    while(tail->next != NULL){
        prev = tail;
        tail = tail->next;  
    }

    // then prev->next ko null kardo. and delete kardo tail ko
    prev->next = NULL;
    delete tail;
}

ListNode* getNode(ListNode* head, int j){
    int k = 1;
    while(k<=j and head != NULL){
        head = head->next;
        k++;
    }
    return head;
}


void DeleteAtIndex(ListNode*& head, int i){

    // Corner Case
    if(i == 0){  // it means i is pointing at First Index,  which is equivalent to delete head
        DeleteAtHead(head);
        return;
    }
    
    ListNode* current = getNode(head, i);
    ListNode* prev = getNode(head, i - 1);


    // Corner Case
    if(current == NULL){
        return;    //it means there is no link list
    }
    prev->next = current->next;
    delete current;
}
int main()
{
    ListNode * head  = NULL;   //Initially Linklist is empty
    InsertionAtHead(head, 50);
    InsertionAtHead(head, 40);
    InsertionAtHead(head, 30);
    InsertionAtHead(head, 20);
    InsertionAtHead(head, 10);

    PrintLinkList(head);

    // DeleteAtHead(head);
    // DeleteAtTail(head);
    DeleteAtIndex(head, 2);

    PrintLinkList(head);
    
 return 0;
}