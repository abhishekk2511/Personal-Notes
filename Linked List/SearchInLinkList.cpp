#include<bits/stdc++.h>
using namespace std;

class ListNode{
    public : 
    int val;
    ListNode * next;

    ListNode(int val){
        this -> val = val;
        this -> next = NULL; 
    }
};

void InsertionAtHead(ListNode *& head, int val){
    ListNode * n = new ListNode(val);   
    n->next  = head;
    head = n;
}

void PrintLinkList(ListNode * head){
    while(head != NULL){
        cout << head->val << " ";
        head  = head->next;
    }
}

bool SearchIterative(ListNode * head,  int target){
    while(head != NULL){
        if(head->val == target){
            return true;
        }
        head = head->next;
    }
    return false;
}


bool SearchRecursive(ListNode * head, int target){
    // base Case
    if(head == NULL){
        return false;
    }
    // recursive Case 
    if(head->val == target){
        return true;
    }
    return SearchRecursive(head->next, target);
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
    // searching Iterativeṇ
    int target = 40;
    if(SearchIterative(head , target)){
        cout << target << "Found";
    }
    else{
        cout << target << " Not Found"; 
    }
    cout << endl;


    // search Recursive
    SearchRecursive(head, target) ? cout << target <<"Found" : cout << target << " Not Found";
    return 0;
}