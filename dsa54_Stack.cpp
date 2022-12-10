#include <iostream>
using namespace std;


class Stack{
 
  public:
  //properties / data members

  int *arr;
  int top;
  int size;
  
  //behavoir / member functions
  Stack(int size){
      this-> size = size;
      top = -1;
      arr = new int[size]; 
  }
  
  void push(int element){
    if(top == size-1){
        cout<<"Stack Overflow "<<endl;
    }
    else{
        top++;
        arr[top] = element;
        cout<<"element pushed is "<<arr[top]<<endl;
    }
  }
  
  void pop(){
      if(top==-1){
          cout<<"Stack is Empty"<<endl;
      }
      else{
      cout<<"\nelement poped is "<<arr[top]<<endl;
      top--;
      }
     
  }
  
  int peak(){
      if(top==-1){
        cout<<"Stack is Empty "<<endl;
        return -1;
      }
      else{
        return arr[top];
      }
  }
  
  bool IsEmpty(){
      if(top==-1){
          return true;
      }
      else{
          return false;
      }
  }
  
  
};


int main(){
    
    Stack S(5);
    
    S.push(22);
    S.push(43);
    S.push(44);
 
    
    S.pop();
    S.push(99);
 

    cout<<"\nElement at the peak of the stack : "<<S.peak() <<endl;
    
    if(S.IsEmpty()){
        cout<<"\nStack is empty "<<endl;
    }
    else{
        cout<<"\nStack is not empty "<<endl;
    }
    
    return 0;
}

