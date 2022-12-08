#include<iostream>
using namespace std;
// array is sorted or not
/*
bool isSorted(int arr[],int size){
    //base case
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{  
        bool ans = isSorted(arr+1,size-1);   // Recursive Relation 
        return ans;
    }
}

int main(){
  
  int arr[5] = {2,4,6,8,9};
  int size = 5;

  bool ans = isSorted(arr,size);
   
  if(ans){
      cout<<"Array is sorted "<<endl;
  }
  else{
      cout<<"Array is Not sorted "<<endl;
  }
    return 0;
} */


// recursively array sum
/*
int getSum(int arr[], int size){
   // Base case
   if(size==0){
       return 0;
   }
   if(size==0){
       arr[0];
   }
   int remaining_part = getSum(arr+1,size-1);
   int sum = arr[0] + remaining_part;

   return sum;
}

int main(){
  
  int arr[5] = {2,45,63,5};
  int size = 5;

  int sum = getSum(arr,size);

  cout<<"sum is "<<sum<<endl; 
    return 0;
}   */

/*
// recursively linear search

bool LinearSearch(int arr[],int size,int k){
    //base case 
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
   else{
      bool remaining_part = LinearSearch(arr+1,size-1,k);
      return remaining_part;
   }

}

int main(){
   
   int arr[5] = {2,4,6,4,7};
   int size =5, key = 4;

   bool ans = LinearSearch(arr,size,key);

   if(ans){
       cout<<"key is present"<<endl;
   }
   else{
       cout<<"key is absent "<<endl;
   }

    return 0;
}*/




/*

void print(int arr[],int s,int e){
    for(int i =s;i<=e;i++){
        cout<<arr[i]<<" ";
    } cout<<endl;
}

// recursively Binary search
bool BinarySearch(int arr[],int s,int e , int k){

    cout<<endl;
    print(arr,s,e);
    int mid = s + (e-s)/2;
    cout<<"Value of arr mid "<<arr[mid]<<endl;
    //base case
   if(s>e){ 
       return false;
   }
   if(arr[mid]==k){
      return true;
   }
   if(arr[mid]<k){
       return BinarySearch(arr,mid+1,e,k);
   }
   else{
       return BinarySearch(arr,s,mid-1,k);
   }

}


int main(){
   
   int arr[5] = {2,4,6,4,7};
   int size = 5, key = 4;

   cout<<"present or not "<< BinarySearch(arr,0,4,key) <<endl;

    return 0;
} 

*/

