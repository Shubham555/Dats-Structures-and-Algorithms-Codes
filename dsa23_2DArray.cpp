#include<iostream>
using namespace std;

bool ispresent(int arr[][4],int target , int row, int col){
    
      for(int row=0;row<3;row++){
          for(int col=0;col<4;col++){

            if(  arr[row][col] == target ){
                return 1;
            }
          }
      }
    return 0;
}

//Printing row wise sum
void PrintROwSum(int arr[][4],int row, int col){
   cout<<"printing row wise sum "<<endl;
   for(int row=0;row<3;row++){
         int sum =0;
          for(int col=0;col<4;col++){
              sum += arr[row][col];
          }
          cout<<sum<<" ";
      } 
    cout<<endl;
}

//Printing column wise sum
void PrintColSum(int arr[][4],int row, int col){
   cout<<"printing column wise sum "<<endl;
   for(int col=0;col<4;col++){
         int sum =0;
          for(int row=0;row<3;row++){
              sum += arr[row][col];
          }
          cout<<sum<<" ";
      } 
    cout<<endl;
}

int largestRowSum(int arr[][4],int row, int col){
    int maxi = INT8_MIN;
    int rowindex = -1;

    for(int row=0;row<3;row++){
         int sum =0;
          for(int col=0;col<4;col++){
              sum += arr[row][col];
          }
        if(sum > maxi){
            maxi = sum;
            rowindex = row ;
        }

      } 

   cout<<"the maximum sum is "<< maxi <<endl;
   return rowindex;
   
}

int main(){

      // Creating 2D Array
      int arr[3][4] ;
      // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};  // input when creating the array.
      //int arr[3][4] = {{1,11,111,1111} , {2,22,222,2222} , {3,33,333,3333} };

      //taking input -> Row wise.
      cout<<"Enter the elements "<<endl;
      for(int row=0;row<3;row++){
          for(int col=0;col<4;col++){
              cin>>arr[row][col];
          }
      } 

    /*  //taking input -> column wise.
      for(int col=0;col<4;col++){
          for(int row=0;row<3;row++){
              cin>>arr[row][col];
          }
      }*/
       

      // printing output => Row wise.
      cout<<"Printing the Array"<<endl;
      for(int row=0;row<3;row++){
          for(int col=0;col<4;col++){
              cout<<arr[row][col]<<" ";
          }
          cout<<endl;
      } 

    /*  //printing output -> column wise.
      for(int col=0;col<4;col++){
          for(int row=0;row<3;row++){
            cout<<arr[row][col]<<" ";
          }
          cout<<endl;
      } */


  /*  cout<<"Enter the element to search "<<endl;
    int target;
    cin>>target;

    if (ispresent(arr,target,3,4)){
        cout<<"Element found "<<endl;
    }
    else{
        cout<<"Element not found "<<endl;
    }

    PrintROwSum(arr,3,4);
    PrintColSum(arr,3,4);  */

    int ansindex = largestRowSum(arr,3,4);
    cout<<"max row is at index "<<ansindex<<endl;

    return 0;
}