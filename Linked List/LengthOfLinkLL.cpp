#include<bits/stdc++.h>
using namespace std;
class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode(int val){
        this -> val = val;
        this -> next = NULL;
    }
};

// this should be pass by reference, because we have to reflect the changes in the main function
void InsertionAtHead(ListNode *& head, int val){
    ListNode* n = new ListNode(val);
    n->next = head;
    head = n;
}

void PrintLinkList(ListNode * head){
    while(head != NULL){
        cout << head->val <<" ";
        head = head->next;
    }
    cout << endl;
}

int CountLinkList(ListNode * head){
    int count = 0;

    while(head != NULL){
        count++;   //count
        head = head->next;  //then update the head
    }
    return count;

}

int countLinkListRecursive(ListNode * head){
    // base Case
    if(head == NULL){
        return 0;
    }
    // recursive case
    int A = countLinkListRecursive(head->next);
    return 1 + A;
}
int main()
{
    ListNode*head = NULL;

    InsertionAtHead(head, 50);
    InsertionAtHead(head, 40);
    InsertionAtHead(head, 30);
    InsertionAtHead(head, 20);
    InsertionAtHead(head, 10);

    PrintLinkList(head);

    cout << "The Lenght of the Linklist is : " << CountLinkList(head) << endl;
    cout << "The Lenght of the Linklist is : " << countLinkListRecursive(head) << endl;
 return 0;

}