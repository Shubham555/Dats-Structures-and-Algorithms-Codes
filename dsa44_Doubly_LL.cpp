#include <iostream>
using namespace std;

class Node{
   public:
   int data;
   Node* prev;
   Node* next;

   //Constructor
   Node(int d){
       this->data = d;
       this->prev = NULL;
       this->next = NULL;
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

void print(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}

int getlength(Node* head){
    int len =0;
    Node* temp = head;

    while(temp!=NULL){
        len++;
        temp = temp ->next;
    }

    return len;

}

void insertAtHead(Node* &tail, Node* &head,int d){
    if(head==NULL){
     Node* temp = new Node(d);
     head = temp;
     tail = temp;
    }
    else{
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head =temp;
    }
}

void insertAtTail(Node* &tail,Node* &head,int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail =temp;
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    //insert at start 1 wala case.
    if(position==1){
        insertAtHead(tail,head,d);
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
        insertAtTail(tail,head,d);
        return ;
    }

    //creating a new node for d = 1,2,3,4,etc... input
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp->next->prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void DeleteNode(int position ,Node* &head, Node* &tail){

    // Deleting first or Head node
    if(position==1){
       Node* temp = head;
       temp -> next -> prev = NULL;
       head = temp -> next;
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
        
        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
  // Node* node1 = new Node(10);  
   
   Node* head = NULL;
   Node* tail = NULL;
   print(head);
  // cout<<getlength(head)<<endl;
   
   insertAtHead(tail,head,11);
   print(head);

   insertAtHead(tail,head,13);
   print(head);

   insertAtTail(tail,head,5);
   print(head);
  
   insertAtTail(tail,head,3);
   print(head);

   insertAtPosition(tail,head,3,56);
   print(head);
   cout<<endl<<"head "<<head -> data << " & tail "<<tail -> data <<endl<<endl;

   insertAtPosition(tail,head,6,44); 
   print(head);
   cout<<endl<<"head "<<head -> data << " & tail "<<tail -> data <<endl<<endl;

   insertAtPosition(tail,head,1,2);
   print(head);
   cout<<endl<<"head "<<head -> data << " & tail "<<tail -> data <<endl<<endl;
  
   cout<<getlength(head)<<endl;
   
   DeleteNode(7,head,tail);
   print(head);
   cout<<endl<<"head "<<head -> data << " & tail "<<tail -> data <<endl<<endl;
   return 0;
}
