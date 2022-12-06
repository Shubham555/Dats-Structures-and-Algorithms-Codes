/*************************** Default Arguments ***********************/
#include<iostream>
using namespace std;

void Print(int arr[],int n,int start =0){
    for(int i = start;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){

   int arr[5] = {1,2,3,4,5};
   int size =5;
   Print(arr,size); // nhi diya to bhi chalegaa. Default Arguments
   cout<<endl;
   Print(arr,size,2); // diya to bhi chalegaa. Default Arguments

    return 0;
}