#include<iostream>
using namespace std;

void reverseGrp(int arr[],int n){

     for(int i=0;i<n;i=i+2){
         if((i+1)<n){
             //swap(arr[i],arr[i+1]);
             int temp = arr[i+1];
             arr[i+1]= arr[i];
             arr[i] = temp;
         }
     }
 }

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
     
     int arreven[8] = {1,2,3,4,5,6,7,8};
     int arrodd[5] = {12,23,34,45,56};

    reverseGrp(arreven,8);
    reverseGrp(arrodd,5);

    printArray(arreven,8);
    printArray(arrodd,5);


    return 0;
}