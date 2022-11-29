#include <iostream>
using namespace std;

void selectionSort(int arr[], int n){
    for(int i=0;i<n-1;i++){
      int minindex = i;

      for(int j=i+1;j<n;j++){
          if(arr[j]<arr[minindex])
          minindex = j;
      }
      
      swap(arr[minindex],arr[i]);
    }
}

int main(){
  int arr[8] = {5,3,56,23,45,31,3,6,};

  selectionSort(arr,8);

  // array elements after calling sort function.(printing).
  for(int i=0;i<8;i++){
      cout<<arr[i]<<" ";
  }
  

    return 0;
}