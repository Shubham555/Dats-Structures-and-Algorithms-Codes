#include<iostream>
using namespace std;

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){  
    cout<<arr[i]<<" ";
    }cout<<endl;
}

void sortOne_two(int arr[],int n){  
        int low=0;
        int mid=0;
        int high=n-1;
        
        while(mid<=high){
            
            if(arr[mid]==0){
                swap(arr[low],arr[mid]);
                low++;
                mid++;
            }
        else if(arr[mid]==1){
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid],arr[high]);
            high--;
        }
            
    }

}
int main(){

   int arr[12] ={1,1,0,0,2,2,0,0,1,2,0,2};

   sortOne_two(arr,12);
   printArray(arr,12);

    return 0;
}