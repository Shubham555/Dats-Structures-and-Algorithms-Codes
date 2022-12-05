#include<iostream>
using namespace std;


int getsum(int *arr, int n){
    int sum =0;

    for(int i =0;i<n;i++){
        sum += i[arr]; // we know aslo we can write arr[i]. 
    }
    return sum;
}

int main(){
   cout<<"Enter the Length of array you want (Dynamically/Heap me store kr rahe):"<<endl;
   int n;
   cin>>n;
   
   //Variable sized array create kr liya "Dynamically" //Heap me tayar hogaya wo ab,new keyword ki use se. 
   int* arr = new int[n];
   
   // taking input in array
   for(int i =0;i<n;i++){
       cin>>i[arr]; // we know aslo we can write arr[i]. 
   }
  

  int ans = getsum(arr,n);
  cout<<"Answer is "<<ans<<endl;



// note : Difference of Statically Allocating and Dynamically Allocating. 
  // case 1:
   while(true){
       int i = 5;  //automatically loop khatam hone ke baad new 'i' ko store krke pichla khatam 'i' ki memory relaese kr deta hai.
   }
  // case 2:
  while(true){
      int* i = new int; // manually pichla 'i' ko release krna padta hai kyoki wo Heap me store hoye wala rehta. 
      delete i;
  } 
  /* for array of many elements.
     int* i = new int[5];
     delete []i;  */

    return 0;
}