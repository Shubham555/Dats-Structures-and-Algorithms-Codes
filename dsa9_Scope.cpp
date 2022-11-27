#include <iostream>
using namespace std;

void update(int arr[],int n){

 //  arr[0]={120}; // Will update direct main value of first index of arr, in main fuction also. bcoz arr is address (for 1st index) not just a variable.
   cout<<"inside the update function "<<endl;

     for(int i=0;i<3;i++){
         cout<<arr[i]<<" ";
     } cout<<endl;


   cout<<"going back to the main function "<<endl;
}
int main(){
     
     int arr[3]={1,2,3};

     update(arr,3);

     for(int i=0;i<3;i++){
         cout<<arr[i]<<" ";
     } cout<<endl;


// Printed Sum of all elements in array :)
    int sum =0;
    for(int i=0;i<3;i++){
        sum = sum + arr[i];
    }
    cout<<"sum is "<<sum<<endl;
    return 0;
}