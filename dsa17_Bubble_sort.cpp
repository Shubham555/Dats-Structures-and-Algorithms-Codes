#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n){ 

     for(int i=1; i<n; i++){ //for round 1 to n-1
        bool swapped = false;
        for(int j=0; j<n-i; j++){  //process elements till n - i th index
           
            if(arr[j]> arr[j+1])
              swap(arr[j],arr[j+1]); 
              swapped = true;
        }
        if(swapped==false){
            // Means already Sorted.
            break;
        }
    }
}

int main(){
  int arr[8] = {5,3,56,23,45,31,13,6,};

  BubbleSort(arr,8);

  // array elements after calling sort function.(printing).
  for(int i=0;i<8;i++){
      cout<<arr[i]<<" ";
  }

    return 0;
}