/******************** functions ***************************/


/*
// Function for  power of given number
#include<iostream>
using namespace std;

int power(int num1,int num2){
    int ans =1;
    for(int i=1;i<=num2;i++){
        ans =ans*num1;
    }
   return ans;
}
int main(){
  int a ,b;
  cin>>a>>b;

  int answer= power(a,b);
  cout<<"answer is "<<answer<<endl;

  return 0;
}
*/

/*
//Function for given number is Even or Odd.
#include<iostream>
using namespace std;

bool IsEven(int a){
    //odd
    if(a&1){
        return 0;
    }
    else{ //Even
        return 1;
    }
}

int main(){

    int num;
    cin>>num;
    
    if(IsEven(num)){
        cout<<"Number is Even "<<endl;
    }
    else{
        cout<<"Number is odd" <<endl;
    }
    return 0;
}*/

/*
// Function for nCr :
#include<iostream>
using namespace std;

int Factorial(int n){
    int fact=1;

    for(int i=1;i<=n;i++){
         fact =fact * i;
    }
    return fact;
}

int nCr(int n,int r){

    int num = Factorial(n);
    int denom= Factorial(r)*Factorial(n-r);
    return num/denom;
}

int main(){
   int n,r;
   cout<<"Enter the value of n & r"<<endl;
   cin>>n>>r;
 
   cout<<"the nCr answer is "<<nCr(n,r);
  
   return 0;
}*/



/*
// function for printing numbers.
#include<iostream>
using namespace std;

void printcount(int n){

  // function body
    for(int i=1;i<=n;i++){
        cout<< i <<" ";
    }
    cout<<endl;
}

int main(){
   int n;
   cin>>n;

// Function call
   printcount(n);
    return 0;
}*/


/*
//Function to check Prime number or Not.

#include<iostream>
using namespace std;

//1 -> prime no.
//0 -> Not a prime no.
bool isPrime(int n){
    
    for(int i=2;i<n;i++){
    // Divide hogaya hai not a prime number    
        if(n%i==0){
            return 0;
        }
    }
  return 1;

}


int main(){
   int n;
   cout<<"enter value of n "<<endl;
   cin>>n;

   if(isPrime(n)){
       cout<<"the number is prime "<<endl;
   }
  else{
      cout<<"the number is not prime "<<endl;
  }
    return 0;
}*/