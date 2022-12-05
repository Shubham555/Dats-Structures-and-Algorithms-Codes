#include<iostream>
using namespace std;

void print(int *p){

    cout<< *p <<endl;
}

void update(int* p){

 //  p = p + 1;
 //  cout<<"inside"<<p<<endl;
   *p = *p + 1;

}

int getsum(int* arr, int n){
int sum =0;
cout<<endl<<"size is (it shows size of only one passed pointer 'arr' and Not the size of whole array) " <<sizeof(arr)<<endl;
   for(int i =0 ;i<n;i++){

   sum += arr[i];

 }
 return sum;
}

int main(){
  
 /*
  //Passing Pointers to Functions
  int value = 5;
  int* p = &value;
 
  //print(p);

  cout<<"Before "<<*p<<endl;
  update(p);
  cout<<"After "<<*p<<endl;  */

  int arr[5] = {1,2,3,4,5};
  cout<<"sum is "<<getsum(arr,5)<<endl;
  cout<<"sum is "<<getsum(arr+3,2)<<endl;



    return 0;
}


 
 