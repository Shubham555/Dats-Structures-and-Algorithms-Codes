//Linked List : Singly Linked List: Codes for -> 1) Creating 2) Inserting 3) Traversing 4) Deleting
#include<iostream>
using namespace std;

class Node{

   public:
   int data;
   Node* next;
   
   //We used constructor
   Node(int data){
       this -> data = data;
       this -> next = NULL;
   }

   //Destructor
   ~Node(){
       int value = this -> data;

       if( this -> next != NULL){
         delete next;
         this -> next = NULL;
       }
       cout<<"Memory is freed for node with data ---> "<< value <<endl;
   }

};

void insertAtHead(Node* &head,int d){

    //creating a new node for d = 1,2,3,4,etc... input
    Node* temp  = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    //creating a new node for d = 1,2,3,4,etc... input
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
   // tail = tail -> next;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    
    //insert at start 1 wala case.
    if(position==1){
        insertAtHead(head,d);
        return ;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp -> next;
        cnt++;
    }

    //inserting at last position wala case.
    if(temp -> next == NULL){
        insertAtTail(tail,d);
        return ;
    }

    //creating a new node for d = 1,2,3,4,etc... input
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;
}

void DeleteNode(int position ,Node* &head, Node* &tail){

    // Deleting first or Head node
    if(position==1){
       Node* temp = head;
       head = head -> next;
       temp -> next = NULL;
       delete temp; // memory free karadii start/head node ki.
    }

    //Deleting last or Any middle node.
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;

        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        if(curr -> next == NULL){
          tail =  prev;
        } 
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
    
    //Created a new node
    Node* node1 = new Node(10);
    /*cout<< node1 -> data << endl;  
    cout<< node1 -> next << endl;  */
    
    //head pointed to node1
    Node* head = node1;
    Node* tail = node1;
// inserting at head & printing 
/*  print(head);
    insertAtHead(head,12);
    print(head);  */

//inserting at tail & printing
    print(head);
    insertAtTail(tail,12);
    print(head);
    insertAtTail(tail,15);
    print(head);
    insertAtTail(tail,20);
    print(head);                  

// All Ready 4 elements ahet linkedList madhe 10,12,15,20.

    insertAtPosition(tail,head,1,8);
    insertAtPosition(tail,head,6,22);
    print(head);
    
    cout<<endl<<"head "<<head -> data << " & tail "<<tail -> data <<endl;

    DeleteNode(1,head,tail); // head & tail update automatically if deleting call for head th or tail th element.
    print(head);

    cout<<"head "<<head -> data << " & tail "<<tail -> data <<endl;

    return 0;
}