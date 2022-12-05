#include<iostream>
using namespace std;

void update(int** p2){
   // p2 = p2 + 1;
   // kuch change hua - NO

   // *p2 = *p2 + 1;
   // kuch change hua - YES

    **p2 = **p2 + 1;
    // kuch change hua - YES 
}

int main(){

    int i =5;
    int* p = &i;
    int** p2 = &p;

 /*   cout<<"printing i "<<i<<endl;
    cout<<"address of i "<<&i<<endl<<endl;

    cout<<"printing p "<<p<<endl;
    cout<<"address of p "<<&p<<endl<<endl;

    cout<<"printing *p2 "<<*p2<<endl; // --> mnje value of p
    cout<<"printing p2 "<<p2<<endl<<endl;   // --> mnje address of p
    
    
    cout<<"value of i "<<endl<<endl;

    cout<<"printing i    means i : "<<i<<endl<<endl;
    cout<<"printing *p   means i : "<<*p<<endl<<endl;
    cout<<"printing **p2 means i : "<<**p2<<endl<<endl;

    cout<<"value of p "<<endl<<endl;

    cout<< &i <<endl;
    cout<< p  <<endl;
    cout<< *p2 <<endl; 

     cout<<"value of p2 "<<endl<<endl;

     cout<< &p <<endl;
     cout<< p2 <<endl;       */

     cout<<endl << "Before "<< i <<endl;
     cout<< "Before "<< p <<endl;
     cout<< "Before "<< p2 <<endl;
     update(p2);
     cout<<endl << "After "<< i <<endl;
     cout<< "After "<< p <<endl;
     cout<< "After "<< p2 <<endl;
    return 0;
}