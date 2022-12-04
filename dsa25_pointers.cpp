#include<iostream>
using namespace std;

int main(){
   
 /*  int num = 5;
   cout<< num <<endl;

   cout<< &num <<endl;  // Address of operator- & 
 
   
   int* ptr = &num;

   cout<<"address is : "<< ptr <<endl; 
   cout<<"Value is : "<< *ptr <<endl; 

   double d = 4.3;
   double* ptr2 = &d;

   cout<< ptr2 <<endl;
   cout<< *ptr2 <<endl;

    cout<<"Size of Integer is "<< sizeof(num) << endl;
    cout<<"Size of Pointer is "<< sizeof(ptr) << endl;
    cout<<"Size of Pointer is "<< sizeof(ptr2) << endl;         */

  /*  int* p = 0;
   
    cout<< *p <<endl;  */

 /*  int i =5 ;

   int* q = &i;
   cout<< q <<endl; 
   cout<< *q <<endl; 

   int* p = 0;
   p = &i;

   cout<< p <<endl; 
   cout<< *p <<endl; */

   int num = 5 ;
   int a = 5;
   cout<<"Before "<< num <<endl;
   a++;
   cout<<"after "<< num <<endl;

   int* p = &num;
   cout<<"Before "<< num <<endl;
   (*p)++;
   cout<<"after "<< num <<endl;

   // Copying a pointer

   int* q = p;

   cout<< p <<"-"<< q <<endl;
   cout<< *p <<"-"<< *q <<endl;

   // Important Concept
   int i = 3;
   int *t = &i;
  // cout<< *t++ <<endl;
   *t = *t + 1;
   cout<< *t <<endl;

   cout<<"befor t + 1 - " << t <<endl;
   t = t + 1;
   cout<<"after t + 1 - " << t <<endl;

 
    return 0;
}