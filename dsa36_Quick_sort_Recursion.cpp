#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot = arr[s];
    int cnt = 0;

    for(int i =s+1;i<=e;i++){
       if(arr[i] <= pivot){
           cnt++;
       }
    }

    //place pivot at right position
    int pivotindex = s + cnt;
    swap(arr[pivotindex],arr[s]);

    //left and right wala part me respectively Smaller & Greater elements dal dete h
    int i = s,j= e;

    while(i< pivotindex && j> pivotindex){

        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }

        if(i< pivotindex && j> pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotindex;
}

void Quicksort(int arr[],int s ,int e){
   
   // baae case
   if(s>=e){
       return ;
   }

   //Partition  kr rahe (P ka index nikal rahe)
   int p = partition(arr,s,e);

   //Recursive calls 
   Quicksort(arr,s,p-1); //left part sort karo
   Quicksort(arr,p+1,e); //right wala part sort karo

}

int main(){

    int arr[11] = {4,1,5,3,2,9,9,9,9,9,9};
    int n = 11;
    
    Quicksort(arr,0,n-1);
    
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}