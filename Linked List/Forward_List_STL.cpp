#include<iostream>
#include<forward_list>
#include<iterator>

using namespace std;

int main(){

    // create an empty Forward list
    forward_list<int> l1;
    cout <<"Size : " << distance(l1.begin(), l1.end()) << endl;

    // Insert Data at the head
    l1.push_front(50);
    l1.push_front(40);
    l1.push_front(30);
    l1.push_front(20);
    l1.push_front(10);

    // size of Forward List
    cout <<"Size : " << distance(l1.begin(), l1.end()) << endl;

    // access the data at the head
    cout << "Head : " << l1.front() << endl;

    // iterate over the forward list
    for(auto it = l1.begin(), end = l1.end(); it != end; it++){
        cout << *it << " ";
    }
    cout << endl;


    // Iterate over a forward List using for each Loop
    for(int x : l1){
        cout << x << " ";
    }    
    cout <<endl;

    // pop element
    l1.pop_front();
    l1.pop_front();

     // size of Forward List
    cout <<"Size : " << distance(l1.begin(), l1.end()) << endl;

    // iterate over the forward listṇṇ
    for(auto it = l1.begin(), end = l1.end(); it != end; it++){
        cout <<*it << " ";
    }
    cout <<endl;

    // clear Forward List
    l1.clear();

     // size of Forward List
    cout <<"Size : " << distance(l1.begin(), l1.end()) << endl;

    // check if forward list is empty
    cout << "IsListEmpty ? " << l1.empty() << endl; 

    // Create the List using fill container
    forward_list<int> l2(3,100);

    // iterate over list
    for(auto it = l2.begin(), end = l2.end(); it != end; it++){
        cout << *it << " ";
    }
    cout <<endl;

    // Create the List of size 4
    forward_list<int> l3(4,0);

    // size of Forward List
    cout <<"Size : " << distance(l3.begin(), l3.end()) << endl;

    // iterate over list
    for(auto it = l3.begin(), end = l3.end(); it != end; it++){
        cout << *it << " ";
    }
    cout <<endl;

    // create t a list using initializer
    forward_list<int> l4 = {1,2,3,4,5};

    // size of Forward List
    cout <<"Size : " << distance(l4.begin(), l4.end()) << endl;
    
    // iterate over list
    for(auto it = l4.begin(), end = l4.end(); it != end; it++){
        cout << *it << " ";
    }
    cout <<endl;
    
}