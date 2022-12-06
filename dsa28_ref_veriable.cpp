#include<iostream>
using namespace std;
/*
// returning reference- Bad practice.
int& func(int n){
    int num = n;
    int& ans = num;

    return ans;
}

int* fun(int n){
    int* ptr = &n;

    return ptr;
}
*/

void update2(int& n){
    n++;
}
void update1(int n){
    n++;
}
int main(){

/*  int i = 5;
    int& j = i; // creating a ref. variable

    cout<< i <<endl;
    i++;
    cout<< i <<endl;
    j++;
    cout<< i <<endl;
    cout<< j <<endl;
*/
  int n =5;
  cout<<"Before "<< n <<endl;
  update2(n);
  cout<<"After "<< n <<endl;
   
 // cout<< func(n)<<endl;
 // cout<< fun(n)<<endl;
    return 0;
}