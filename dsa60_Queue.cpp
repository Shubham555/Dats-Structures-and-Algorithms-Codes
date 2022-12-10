#include<iostream>
using namespace std;

class Queue{
    int *arr;
    int qfront;
    int rear;
    int size;
public:
    Queue() {
        // Implementing the Constructor
        size = 100001;
        arr = new int[size];
        qfront = 0;
        rear = 0;
    }


    bool isEmpty() {
       if(qfront == rear){
           return true;
       }
        else
        {
            return false;
        }
        
    }

    void enqueue(int data) {
     if(rear == size){
         cout<<"Queue is Full "<<endl;
     }
     else
     {
         arr[rear] = data;
         cout<<"Element enqueued is "<<arr[rear]<<endl;
         rear++;
     }    
    }

    int dequeue() {
      if(qfront== rear)
          return -1;
        else
        {
            int ans = arr[qfront];
            cout<<"\nElement Dequeued is "<<ans<<endl;
            arr[qfront] = -1;
            qfront++;
            if(qfront==rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }

    int front() {
      if(qfront==rear){
          return -1;
      }
      else
      {
          return arr[qfront];
      }
   
    }
};


int main(){


    
    Queue Q;
    
    Q.enqueue(22);
    Q.enqueue(43);
    Q.enqueue(44);
 
    
    Q.dequeue();
    Q.enqueue(99);


    cout<<"\nElement at the front is : "<<Q.front() <<endl;
    
    if(Q.isEmpty()){
        cout<<"\nStack is empty "<<endl;
    }
    else{
        cout<<"\nStack is not empty "<<endl;
    }


    return 0;
}
