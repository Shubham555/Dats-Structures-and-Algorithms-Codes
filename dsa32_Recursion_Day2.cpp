#include<iostream>
using namespace std;
/*
 //Reach destination

void ReachHome(int src, int dest){
    cout<<"source "<< src<<" destination "<< dest <<endl;
    
    //Base case
    if(src == dest){
        cout<<"Pohacha gaya bhai :) "<<endl;
        return ;
    }
    //Processing -> ek step aage bhejne ki process kr rahe
    src++;

    //Recursive Relation & call
    ReachHome(src,dest);

}

int main(){

   int dest = 10;
   int src = 1;

   cout<<endl;
   ReachHome(src,dest);

    return 0;
} */


void SayDigit(int n,string arr[]){
  // Base case
   if(n==0){
       return ;
   }
  //processing 
  int digit = n % 10;
  
   n = n / 10;
   
 // R.R or call
   SayDigit(n,arr);

   cout << arr[digit]<<" ";
}

int main(){

   string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

   int n;
   cout<<"Enter the number "<<endl;
   cin>>n;

   cout<<endl;
   SayDigit(n,arr);
   cout<<endl;

    return 0;
}