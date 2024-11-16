// Manual ( khud se ) Implementation of double linked list -:

// class Node --> Doubly ll Node / We make doubly ll user defined data type.
//  ***************** Advantages of the DLL is -> print reverse LL very efficient/easily/better. ******************
// In SLL we display/print our LL in reverse order using recursion.

#include <iostream>
using namespace std;
class Node // DLL Node
{
public:
    int val;
    Node *next;
    Node *prev; // extra for DLL
    // constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL; // extra for DLL
    }
};

// (head takes address so we write Node*) becoz display fun pass the Node a
// if interger(int) value is pass than write int* it store the address of integer(int) , floating(float) value pass than write flaot* 
// like this if Node is pass than write Node* it store the address of the Node 



// Iterative display -> normal order by using head 
void display(Node* head) // O(1) space 
{
    // while(head!=NULL) or while(head) both are same 
    while(head)
    {
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
}



// Iterative way to display dll -> reverse order by using tail 
void displayRev(Node* tail) // O(1) space 
{
    while(tail!=NULL)
    {
        cout<<tail->val<<" ";
        tail=tail->prev;
    }
    cout<<endl;
}




// Recursive display 
// display Dll in normal order using recursion
void displayrec1(Node* head)  // O(n) space 
{
    if(head==NULL) return ;
    cout<<head->val<<" ";
    displayrec1(head->next);
}

// display Dll in reverse order using recursion
void displayrec2(Node* head)   // O(n) space 
{
    if(head==NULL) return ;
    displayrec2(head->next);
    cout<<head->val<<" ";
    
}





int main()
{
    Node* a =new Node(10);
    Node* b =new Node(20);
    Node* c =new Node(30);
    Node* d =new Node(40);
    Node* e =new Node(50);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->prev=d;
    d->prev=c;
    c->prev=b;
    b->prev=a;

    // display(a); // a is node / we pass a node // this is like pass by value 
    // cout<<endl;

    // recursive display dll 
    displayrec1(a); // normal display 
    cout<<endl;
    displayrec2(a); // reverse display 

    
    // // iterative display dll
    // display(a); // head pass hua normal ke liye // display dll in normal order using head node 
    // displayRev(e); // tail pass hua reverse ke liye // display dll in reverse order using tail node
    
    // // displayRev(c); // iterative way to display dll SC=O(1) 
    // c pass karne per c se pichhe wali ele. ko display kar dega


}