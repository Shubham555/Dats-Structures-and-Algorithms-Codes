/****************  Switch Statement & Functions ******************************/
 
#include <iostream>
using namespace std;

int main(){
  char ch ='1';
  int num = 2;
  cout<<endl;

switch(3*num){

    case 6:cout<<"first"<<endl;
           cout<<"first again"<<endl;
          break;
        //break;
      
    case '1': switch(num){
             case 1: cout<<"the value of num is "<<num<<endl;
             break;
            }
            break;
      
    default:cout<<"It is defualt case"<<endl;
            break;   
  }
   cout<<endl;


}
/*
int main(){
    int a,b;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;

    char op;
    cout<<"Enter the operation you want to perform "<<endl;
    cin>>op;

    switch(op){
    
    case '+': cout<< (a+b) <<endl;
            break;

    case '-': cout<< (a-b) <<endl;
            break;

    case '*':cout<< (a*b) <<endl;
            break;

    case '/':cout<< (a/b) <<endl;
            break;
    case '%':cout<< (a%b) <<endl;
            break;

    default: cout<<"Enter the valid operation "<<endl; 


    }

}*/
