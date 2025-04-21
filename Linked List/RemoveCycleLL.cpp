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

void RemoveCycle(ListNode * head){

    // both set at head
    ListNode * slow = head;
    ListNode * fast = head;

    while(true){
         // slow moves one step , and fast moves two step, until slow and fast becomes same (if condiotion becomes true if the cycle is present)
        slow = slow -> next;
        fast = fast->next->next; 


        // meeting Point
        if(slow == fast){
            break;
        }
    }

    // now slow moves to head again
    slow = head;

    while(slow->next != fast->next){
        // now both move one one step forward
        slow = slow->next;
        fast = fast->next;
    }

    // now update the fast , it will reached on tail , set to NULL
    fast->next = NULL;
}
int main()
{
    ListNode * head = new ListNode(10);
    head->next  = new ListNode(20);
    head->next ->next  = new ListNode(30);
    head->next ->next->next  = new ListNode(40);
    head->next ->next->next->next  = new ListNode(50);
    head->next ->next->next->next->next  = new ListNode(60);
    head->next ->next->next->next->next->next = head->next->next;  //60 next field joins to 3rd node, makes
   
    RemoveCycle(head);
    PrintLinkList(head);

   
    return 0;
}