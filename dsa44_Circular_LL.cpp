#include <iostream>
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

void insertNode(Node* &tail,int element,int d){

    //Empty list
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode-> next = newNode;
    }
    //Non-Empty List
    //Assuming that the element is present in the list
    else{
      Node* curr = tail;

      while(curr->data != element){
         curr = curr->next;
      }
     // yaha tak aaye element mil chuka hai -> Now curr is representing element wali node
     Node* temp = new Node(d);
     temp->next = curr -> next;
     curr->next = temp;

    }
}

void print(Node* tail){
    Node* temp = tail;

    //Empty list
    if(tail==NULL){
        cout<<"List is Empty "<<endl;
        return ;
    }

    do{
        cout<< tail->data <<" ";
        tail = tail -> next;
    }while( tail != temp );
    cout<<endl;
}

void deleteNode(Node* &tail,int value){
    
    //Empty list
    if(tail==NULL){
        cout<<"List is Empty plz check again "<<endl;
        return;
    }

    else{
        //Non-Empty list
        //Assuming that "value" given & is to be deleted ,is present in the linked list.
        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != value ){
            prev = curr;
            curr = curr -> next;
        }

        prev -> next = curr->next;
        // 1 Node linked list
        if(curr==prev){
            tail = NULL;
        }
        //2 or More node ki Linked List.
        else if(tail==curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }

}

int main(){
 
    Node* tail = NULL;
    
    //Abhi 1st time hai so, Empty list me insert kara raha hai.
    insertNode(tail,5,3);
    print(tail);
    
    insertNode(tail,3,5);
    print(tail);

/*   insertNode(tail,5,7);
    print(tail);

    insertNode(tail,7,9);
    print(tail);

    insertNode(tail,5,6);
    print(tail);

    insertNode(tail,9,10);
    print(tail);

    insertNode(tail,3,4);
    print(tail); */
    
    deleteNode(tail,5);
    print(tail);

    return 0;
}