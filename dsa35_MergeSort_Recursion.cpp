#include<iostream>
using namespace std;


void merge(int arr[],int s,int e){

    int mid = (s+e)/2;
    
    int lenLeft = mid - s + 1;
    int lenRight = e - mid;
   
    //Dynamically left and right array banarahe.
    int* LeftArray = new int[lenLeft];
    int* RightArray = new int[lenRight];

    //copy values
    int mainArrayIndex = s;
    for(int i =0; i<lenLeft;i++){
        LeftArray[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid+1;
    for(int i =0;i<lenRight;i++){
        RightArray[i] = arr[mainArrayIndex++];
    }

    //merge 2 sorted array
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;


    while(index1 < lenLeft && index2 < lenRight ){
        if(LeftArray[index1] < RightArray[index2]){
            arr[mainArrayIndex++] = LeftArray[index1++];
        }
        else{
            arr[mainArrayIndex++] = RightArray[index2++];
        }
    }

   while(index1 < lenLeft){
       arr[mainArrayIndex++] = LeftArray[index1++];
   }
   while(index2 < lenRight){
       arr[mainArrayIndex++] = RightArray[index2++];
   }

    delete []LeftArray;
    delete []RightArray;

}

void mergesort(int arr[],int s,int e){
        //base case
        if(s >= e){
            return ;
        }
        int mid = (s+e)/2;

       //left part sort karna h 
       mergesort(arr,s,mid);
       //right part sort karna h 
       mergesort(arr,mid+1,e);

       //merge both sorted left and right array
       merge(arr,s,e);
}

int main(){

   int arr[15] = {3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
   int n = 15;
   
   mergesort(arr,0,n-1);

   for(int i =0;i<n;i++){
       cout<<arr[i]<<" ";
   }cout<<endl;
   

    return 0;
}