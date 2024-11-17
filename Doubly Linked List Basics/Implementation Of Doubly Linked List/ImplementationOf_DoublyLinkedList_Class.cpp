// // Implementation Doubly Linked List Class
// // Doubly Linked List Class
// // jb hm insert kucha karte hai to ek new node temp jarur banate hai
// // insert means make new node temp or t.

// // extra in dll -> extra cases hai doubly ll me -> except all cases is same in Sll.

// #include <iostream>
// using namespace std;
// class Node // user defind data type
// { 
// public:
//     int val;
//     Node* next;
//     Node* prev;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//         this->prev = NULL;
//     }
// };

// class DoublyLinkedList  // user defind data structure
// { 
// public:
//     // three data member
//     Node *head;
//     Node *tail;
//     int size;
//     // constructor
//     DoublyLinkedList(){
//         head = tail = NULL;
//         size = 0;
//     }

//     // InsertAtTail function -: 

//     void insertatend(int val)
//     {
//         Node *temp = new Node(val);
//         if (size == 0)
//         {
//             head = tail = temp;
//         }
//         else
//         {
//             tail->next = temp;
//             temp->prev=tail; // extra in dll
//             tail = temp; 
//         }
//         size++;
//     }

//     // InsertAtHead function -: 

//     void insertathead(int val)
//     {
//         Node *temp = new Node(val);
//         if (size == 0)
//         {
//             head = tail = temp;
//         }
//         else
//         {
//             temp->next = head;
//             head->prev=temp; // extra in dll 
//             head = temp;
//         }
//         size++;
//     }

//       // InsertAtAnyIndex function -: 

//     void insertatidx(int idx, int val)
//     {
//         if (idx < 0 || idx > size)
//             cout << " Invalid Index " << endl;
//         else if (idx == 0)
//             insertathead(val);
//         else if (idx == size)
//             insertatend(val);
//         else
//         {
//             Node* t = new Node(val); // new node t jo insert hoga dll me 
//             Node* temp = head; // this new node temp is used for traversing in the dll
//             for (int i = 1; i <= idx - 1; i++)
//             {
//                 temp = temp->next; // temp traverse kar rhe hai idx - 1 tk
//             }
//             t->next = temp->next;
//             temp->next = t;
//             t->prev=temp; // extra in dll
//             t->next->prev=t; // extra in dll
//             size++;
//         }
//     }




//     // DeleteAtHead function -:

//     void deleteathead()
//     {
//         if (size == 0) // empty hai dll 
//         {
//             cout << "List is empty ! ";
//             return;
//         }
//         else // (size>=0)
//         {
//             head = head->next;
//             if(head!=NULL)  head->prev=NULL; //if(head!=NULL) == if(head)   // extra hai dll
//             if(head==NULL)  tail=NULL;   // extra hai dll
//             size--; 
//         }
//     }

//     // DeleteAtTail function -:

//     void deleteattail()
//     {
//         if (size == 0)
//         {
//             cout << "List is empty ! ";
//             return;
//         }
//         else if (size==1) // extra in dll
//         {
//             deleteathead();
//             return ;
//         }
//         Node* temp = tail->prev; // extra in dll
//         temp->next = NULL;
//         tail = temp;
//         size--;
//     }


//     // DeleteAtIndex function -:

//     void deleteatidx(int idx)
//     {
//         if (size == 0)
//         {
//             cout << "Linked List is empty !";
//             return;
//         }

//         else if (idx < 0 || idx >= size)
//         {
//             cout << "Invalid index ! ";
//             return;
//         }

//         else if (idx == 0)  return deleteathead();
//         else if (idx == size - 1)  return deleteattail();
//         else
//         {
//             Node *temp = head; // temp starting me head per hai
//             for (int i = 0; i < idx - 1; i++) // temp traverse kar rha hai ek kam tk jis idx ke node ko delete karna hai
//             {
//                 temp = temp->next;
//             }
//             temp->next = temp->next->next;
//             temp->next->prev=temp; // extra in dll
//             size--;
//         }
//     }


    

//     int getatidx(int idx)
//     {
//         if (idx < 0 || idx >= size)
//         {
//             cout << "Invalid Index ";
//             return -1;
//         }
//         else if (idx == 0)  return head->val;  // get at head
//         else if (idx == size - 1)  return tail->val;  // get at tail
//         else
//         {
//             Node *temp = head;
//             for (int i = 1; i <= idx; i++)
//             {
//                 temp = temp->next;
//             }
//             return temp->val;
//         }
//     }




//     // Display function -:
//     void display()
//     {
//         Node *temp = head;
//         while (temp != NULL)
//         {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// };

// int main()
// {
//     DoublyLinkedList ll;  // DoublyLinkedList is implemented as a data structure.

//     // InsertAtTail function -:
//     ll.insertatend(10); 
//     ll.display();
//     cout << ll.size;
//     cout << endl;
//     ll.insertatend(20); 
//     ll.display();
//     cout << ll.size << endl;
//     ll.insertatend(30); 
//     ll.insertatend(40); 
//     ll.display();
//     cout << ll.size;
//     cout << endl;
//     cout<<endl;


//     // InsertAtHead function -: 
//     ll.insertathead(50); 
//     ll.display();
//     cout << ll.size;
//     cout << endl;
//     ll.insertathead(100);
//     ll.display(); 
//     cout << ll.size << endl;
//     ll.insertathead(900);
//     ll.display();
//     cout << ll.size << endl;
//     cout<<endl;



//     // InsertAtAnyIndex function -: 
//     ll.insertatidx(4, 1000); 
//     ll.display();
//     cout << ll.size << endl;
//     ll.insertatidx(6, 10000); 
//     ll.display();
//     cout << ll.size << endl;
//     cout<<endl;




//     // DeleteAtHead function -: 
//     ll.deleteathead();
//     ll.display();
//     cout << ll.size;
//     cout << endl;
//     ll.deleteathead();
//     ll.display();
//     cout << endl;
//     ll.deleteathead();
//     ll.display();
//     cout << ll.size;

//     cout << endl;
//     cout << endl;



//     // DeleteAtTail function -:
//     ll.deleteattail();
//     ll.display();
//     cout << ll.size << endl;
//     ll.deleteattail();
//     ll.display();
//     cout << ll.size;
//     cout << endl;



//     // DeleteAtIndex function -:
//     ll.deleteatidx(2);
//     ll.display();
//     cout << ll.size;
//     cout<<endl;
//     cout<<endl;



//     // GetAtIndex function -:    
//     cout << ll.getatidx(6);
//     cout << endl;
//     cout << ll.getatidx(0);
//     cout << endl;
//     cout << ll.getatidx(-1);
//     cout << endl;
//     cout << ll.getatidx(2);
//     cout << endl;
//     cout << ll.getatidx(1);
//     cout << endl;


// }


// // 10 
// // 1
// // 10 20
// // 2
// // 10 20 30 40
// // 4

// // 50 10 20 30 40
// // 5
// // 100 50 10 20 30 40
// // 6
// // 900 100 50 10 20 30 40
// // 7

// // 900 100 50 10 1000 20 30 40
// // 8
// // 900 100 50 10 1000 20 10000 30 40 
// // 9

// // 100 50 10 1000 20 10000 30 40
// // 8
// // 50 10 1000 20 10000 30 40

// // 10 1000 20 10000 30 40
// // 6

// // 10 1000 20 10000 30
// // 5
// // 10 1000 20 10000
// // 4
// // 10 1000 10000
// // 3

// // Invalid Index -1
// // 10
// // Invalid Index -1
// // 10000
// // 1000

// // dll implementation is done 

















// we Optimised these three functions in dll ex-> get at index
// insert at index (Optimised)
// delete at index (Optimised)
// get at index (Optimised)


// Implementation Doubly Linked List Class
// Doubly Linked List Class
// jb hm insert kucha karte hai to ek new node temp jarur banate hai
// insert means make new node temp or t.

// extra in dll -> extra cases hai doubly ll me -> except all cases is same in Sll.


#include <iostream>
using namespace std;
class Node // user defind data type
{ 
public:
    int val;
    Node* next;
    Node* prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DoublyLinkedList  // user defind data structure
{ 
public:
    // three data member
    Node *head;
    Node *tail;
    int size;
    // constructor
    DoublyLinkedList(){
        head = tail = NULL;
        size = 0;
    }




    // InsertAtTail function -: 
    void insertatend(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            tail->next = temp;
            temp->prev=tail; // extra in dll
            tail = temp; 
        }
        size++;
    }


    // InsertAtHead function -: 
    void insertathead(int val)
    {
        Node *temp = new Node(val);
        if (size == 0)
        {
            head = tail = temp;
        }
        else
        {
            temp->next = head;
            head->prev=temp; // extra in dll 
            head = temp;
        }
        size++;
    }


    // InsertAtAnyIndex function -: 
    void insertatidx(int idx, int val)
    {
        if (idx < 0 || idx > size)
            cout << " Invalid Index " << endl;
        else if (idx == 0)
            insertathead(val);
        else if (idx == size)
            insertatend(val);
        else
        {
            Node* t = new Node(val); // new node t jo insert hoga dll me 
            Node* temp = head; // this new node temp is used for traversing in the dll
            for (int i = 1; i <= idx - 1; i++)
            {
                temp = temp->next; // temp traverse kar rhe hai idx - 1 tk
            }
            t->next = temp->next;
            temp->next = t;
            t->prev=temp; // extra in dll
            t->next->prev=t; // extra in dll
            size++;
        }
    }




    // DeleteAtHead function -:
    void deleteathead()
    {
        if (size == 0) // empty hai dll 
        {
            cout << "List is empty ! ";
            return;
        }
        else // (size>=0)
        {
            head = head->next;
            if(head!=NULL)  head->prev=NULL; //if(head!=NULL) == if(head)   // extra hai dll
            if(head==NULL)  tail=NULL;   // extra hai dll
            size--; 
        }
    }



    // DeleteAtTail function -:
    void deleteattail()
    {
        if (size == 0)
        {
            cout << "List is empty ! ";
            return;
        }
        else if (size==1) // extra in dll
        {
            deleteathead();
            return ;
        }
        Node* temp = tail->prev; // extra in dll
        temp->next = NULL;
        tail = temp;
        size--;
    }





    // Method-> 1 DeleteAtIndex Normal ways -> 
    void deleteatidx(int idx)
    {
        if (size == 0)
        {
            cout << "Linked List is empty !";
            return;
        }

        else if (idx < 0 || idx >= size)
        {
            cout << "Invalid index ! ";
            return;
        }

        else if (idx == 0)  return deleteathead();
        else if (idx == size - 1)  return deleteattail();
        else
        {
            Node *temp = head; // temp starting me head per hai
            for (int i = 0; i < idx - 1; i++) // temp traverse kar rha hai ek kam tk jis idx ke node ko delete karna hai
            {
                temp = temp->next;
            }
            temp->next = temp->next->next;
            temp->next->prev=temp; // extra in dll
            size--;
        }
    }







//  // Method-> 2 DeleteAtIndex (optimised) ways -> 
//  // Method-> 2 InsertAtIndex (optimised) ways -> 
//  // ********** if you have a time then you solve these two functions like get at index in a optimised ways  *************













 // // Method-> 1 get at index Normal ways -> 

    // int getatidx(int idx)
    // {
    //     if (idx < 0 || idx >= size)
    //     {
    //         cout << "Invalid Index ";
    //         return -1;
    //     }
    //     else if (idx == 0)  return head->val;  // get at head
    //     else if (idx == size - 1)  return tail->val;  // get at tail
    //     else
    //     {
    //         Node *temp = head;
    //         for (int i = 1; i <= idx; i++)
    //         {
    //             temp = temp->next;
    //         }
    //         return temp->val;
    //     }
    // }






// //  Method-> 2 get at index (Optimised) ways ->

// // we Optimised these three functions in dll ex-> get at index
// // insert at index (Optimised)
// // delete at index (Optimised)
// // get at index (Optimised)


// // get at index (Optimised) means hmare pass 100 size ki dll given h and hme 80th idx ke ele ko find karna h
// // to hm 1 idx to 80 idx tk traverse karne se achha 100 idx se 80 idx tk hi travel karke apna 80th idx wala ele find kar lu
// // becoz dll me traversal both side possible h via head as well as tail 
// // head se travel tb karenge jb hmara idx<size/2 ho and tail se jb idx>=size/2 se 


// //  Method-> 2 get at index (Optimised) -> 
//     int getatidx(int idx)
//     {
//         if (idx < 0 || idx >= size)
//         {
//             cout << "Invalid Index ";
//             return -1;
//         }

//         else if (idx == 0)  return head->val;  // get at head
//         else if (idx == size - 1)  return tail->val;  // get at tail
//         else
//         {
//             // ex-> size=100, idx=80th ele need 
//             if (idx<size/2) // normal order traverse
//             {
//                 Node *temp = head;
//                 for (int i = 1; i <= idx; i++)
//                 {
//                     temp = temp->next;
//                 }
//                 return temp->val;
//             }
//             else // (idx>=size/2) // reverse order traverse 
//             {
//                 Node *temp = tail;
//                 for (int i = 1; i < size - idx; i++)
//                 {
//                     temp = temp->prev;
//                 }
//                 return temp->val;
//             }
//         }

//     }









    // Display function -:
    void display()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


int main()
{
    DoublyLinkedList ll;  // DoublyLinkedList is implemented as a data structure.
    // InsertAtTail function -:
    ll.insertatend(10); 
    ll.insertatend(60); 
    ll.insertatend(20); 
    ll.insertatend(90); 
    ll.insertatend(40); 
    ll.insertatend(50); 
    ll.display();
  


    // InsertAtHead function -: 
    // ll.insertathead(50); 
    // ll.display();
    // cout << ll.size;
    // cout << endl;
    // ll.insertathead(100);
    // ll.display(); 
    // cout << ll.size << endl;
    // ll.insertathead(900);
    // ll.display();
    // cout << ll.size << endl;
    // cout<<endl;



    // // InsertAtAnyIndex function -: 
    // ll.insertatidx(4, 1000); 
    // ll.display();
    // cout << ll.size << endl;
    // ll.insertatidx(6, 10000); 
    // ll.display();
    // cout << ll.size << endl;
    // cout<<endl;




    // // DeleteAtHead function -: 
    // ll.deleteathead();
    // ll.display();
    // cout << ll.size;
    // cout << endl;
    // ll.deleteathead();
    // ll.display();
    // cout << endl;
    // ll.deleteathead();
    // ll.display();
    // cout << ll.size;

    // cout << endl;
    // cout << endl;



    // // DeleteAtTail function -:
    // ll.deleteattail();
    // ll.display();
    // cout << ll.size << endl;
    // ll.deleteattail();
    // ll.display();
    // cout << ll.size;
    // cout << endl;



    // DeleteAtIndex function -:
    ll.deleteatidx(2);
    ll.display();
    cout << ll.size;
    cout<<endl;



    // // size = 6, idx = 0 to 5
    // // GetAtIndex function optimised ways dry run -: 
    // cout << ll.getatidx(5);
    // cout<<endl;
    // cout << ll.getatidx(3);
 



}

// done 