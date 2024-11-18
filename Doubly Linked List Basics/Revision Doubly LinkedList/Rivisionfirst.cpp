// *********************  Implementation of doubly linked list ************************

#include<iostream>
using namespace std;
class Node
{
    public:
    int val;
    Node*next;
    Node* prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }

};

class DoublyLinkedList
{
    public:
    Node* head;
    Node* tail;
    int size;
    DoublyLinkedList()
    {
        head=tail=NULL;
        size=0;
    }

void insertathead(int val)
{
    Node* temp=new Node(val);
    if(size==0)
    {
        head=tail=temp;
        size++;
    }
    else
    {
        temp->next=head;
        head->prev=temp;
        head=temp;
        size++;
    }
}


void insertattail(int val)
{
    Node* temp = new Node(val);
    if(size==0)
    {
        head=tail=temp;
        size++; 
    }
    else
    {
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
        size++;
    }
}

void insertatidx(int idx, int val)
{
    if(idx<0 || idx>size)
    {
        cout<<"Invalid index!"<<endl;
    }
    else if(idx==0)
    {
         insertathead(val);
    }
    else if (idx==size)
    {
        insertattail(val);
    }
    else 
    {
        Node* temp=head;
        Node* t = new Node(val);
        for(int i=1; i<=idx-1; i++)
        {
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;
        t->prev=temp;
        t->next->prev=t;
        size++;
    }
}

void deleteathead()
{
    if(size==0)
    {
        cout<<"Doubly Linked List is empty! Underflow";
        return ;
    }
    else
    {
        head=head->next;
        head->next->prev=NULL;
        if(head!=NULL) head->prev=NULL;
        if(head==NULL) tail=NULL;
        size--;
    }
}

void deleteattail()
{
    if(size==0)
    {
        cout<<"Linked List is empty!";
        return ;
    }
    else if(size==1)
    {
        deleteathead();
        return;
    }
    else
    {
        Node* temp=tail->prev;
        temp->next=NULL;
        tail=temp;
        size--;
    }
}

void deleteatidx(int idx)
{
    if(idx<0 || idx>size)
    {
        cout<<"Invalid Index";
        return ;
    }
    else if(idx==0)
    {
        return deleteathead();
    }
    else if(idx==size)
    {
        return deleteattail();
    }
    else 
    {
        Node* temp=head;
        for(int i=1; i<idx; i++)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        temp->next->prev=temp;
        size--;
    }
}

int getathead()
{
    if(size==0)
    {
        cout<<" List is empty ! ";
        return -1;
    }
    else
    {
        cout<<head->val;
    }
}

int getattail()
{
    if(size==0)
    {
        cout<<" Doubly Linked List is empty! ";
        return -1; 
    }
    else
    {
        cout<<tail->val;
    }
}


int getatidx(int idx)
{
    if(idx<0 || idx>size)
    {
        cout<<"Invalid Index!";
        return -1;
    }
    else if (idx==0)
    {
        return getathead();
    }
    else if (idx==size)
    {
        return getattail();
    }
    else
    {
        Node* temp=head;
        for(int i=1; i<idx; i++)
        {
            temp=temp->next;
        }
        cout<<temp->next->val;
    }
}

void display()
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

};
int main()
{
    DoublyLinkedList dll;
    dll.insertathead(10);
    dll.insertathead(20);
    dll.insertathead(30);
    dll.insertathead(40);
    dll.insertathead(50);
    dll.display();



    dll.insertattail(100);
    dll.display();
    dll.insertattail(200);
    dll.insertattail(300);
    dll.insertattail(400);
    dll.display();




    dll.insertatidx(2,-10);
    dll.display();
    dll.insertatidx(5,-50);
    dll.display();
    cout<<endl;
    dll.insertatidx(3,-30);
    dll.display();


    dll.deleteathead();
    dll.display();
    dll.deleteathead();
    dll.display();


    dll.deleteattail();
    dll.display();
    cout<<dll.size<<endl;


    dll.deleteatidx(2);
    dll.display();
    dll.deleteatidx(6);
    dll.display();


    dll.getathead();
    cout<<endl;
    dll.getattail();
    cout<<endl;
    dll.getatidx(5);

    

}