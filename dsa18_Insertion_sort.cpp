#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n){

       for(int i=1;i<n;i++){
        int temp = arr[i];
        int j= i-1;
        
        for(;j>=0;j--){
            if(arr[j]>temp){
                //shift karoo.
               arr[j+1] =arr[j];
            }
            else{  //ruk jao
                break;
            }
        }
        arr[j+1] = temp ;
    }

}

int main(){
  int arr[8] = {5,3,56,23,45,31,13,6};

  InsertionSort(arr,8);

  // array elements after calling sort function.(printing).
  for(int i=0;i<8;i++){
      cout<<arr[i]<<" ";
  }

    return 0;
}