/********************** Globle Variable  *****************/
#include<iostream>
using namespace std;

int score = 15;           //---> Global for All Functions, Can be Accessed by all the Functions :)

void a(int& i){
    cout<<score<<" score in a function "<<endl;
   // score++;
    char ch = 'a';            //---> Local for 'a' function
    cout<<"i = "<<i <<endl;
 
}

void b(int& i){
    cout<<score<<" score in b function "<<endl;
    cout<<"i = "<<i <<endl;
}
int main(){
    cout<<score<<" score in main function "<<endl;
    int i = 5;               //---> Local for 'main' function
    a(i);
    b(i);

    return 0;
}