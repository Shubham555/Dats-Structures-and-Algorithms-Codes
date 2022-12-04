#include<iostream>
using namespace std;

int main (){
/*
   int arr[10] = {2,4,6,56};
   cout<<"Adress of first memory block is  "<<arr<<endl;
   cout<<arr[0]<<endl;
   cout<<"Adress of first memory block is  "<<&arr[0]<<endl;
    
   cout<<"index "<< *arr+ 1 <<endl; 
   cout<<"index "<< *(arr+1) <<endl;
  
   int i =3 ;
   cout<< i[arr] << endl; */

 /*
   int arr[5] = {1,2,3} ;
   int* p = &arr[0];

   cout<<" size "<< sizeof(arr) <<endl ;
   cout<<" size "<< sizeof(*arr) <<endl ;
   cout<<" size "<< sizeof(&arr[0]) <<endl ;
   cout<<" size "<< sizeof(&arr) <<endl ;

   cout<<"pointer ka baate "<<endl ;

   cout<<" size "<< sizeof(p) <<endl ;
   cout<<" size "<< sizeof(*p) <<endl ;
   cout<<" size "<< sizeof(&p) <<endl ;  */

/*
   int a[20] = {1,2,3,4};
   cout<< &a[0] <<endl;
  // cout<< &a <<endl;
  // cout<< a <<endl;

  int* p = &a[0];
  cout<< &p <<endl;  */

  int arr[10];
  //Error
      // arr = arr + 1;

  int* ptr = &arr[0];
  cout << ptr <<endl;
  ptr = ptr + 1;
  cout << ptr  <<endl;  // karan ptr manje adress of  &arr[0] like - 710, so to plus++ hou shkto na ,710 + 4 = 714.

   return 0;
}