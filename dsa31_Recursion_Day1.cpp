#include<iostream>
using namespace std;

/* Factorial of number

int factorial(int n){

    if(n==0){   // Base condition / ruknewali condition.
        return 1;
    }

    return n * factorial(n-1);  // Here's Our Recurence Relation & call.
} */

/* any power of 2
 
int power(int n){
    //Base case
    if(n==0){
        return 1;
    }

    // Recursive Relation & call
    return 2 * power(n-1);
} */

// print counting
void print(int n){
    //Base case
    if(n==0){
        return ;
    }
    
    //Recursive relation & call.
    print(n-1); 

    cout<< n <<endl;
}

int main(){
   
  /* int n;
   cout<<"Enter the the number you want to get factorial of "<<endl;
   cin>>n;

   int ans = factorial(n);
   cout<<"Factorial of given number is "<< ans <<endl; */

  /*int n;
  cout<<"Enter the value of n "<<endl;
  cin>>n;

  int ans = power(n);
  cout<< ans <<endl; */
  
  int n;
  cout<<"Enter the value of n "<<endl;
  cin>>n;
  cout<<endl;

  print(n);


    return 0;
}