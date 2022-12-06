#include <iostream>
using namespace std;

int main(){
// For n*n array
 /*   int n;
    cout<<"Enter the size of 2D array "<<endl;
    cin >> n; */

// For n*m array
    int row;
    cout<<"Enter row"<<endl;
    cin>>row;

    int col;
    cout<<"Enter col"<<endl;
    cin>>col;


    //Creating 2D array
    int** arr = new int*[row];
    for(int i=0;i<row;i++){
        arr[i] = new int[col];
    }

    cout<<"Enter array elements, remember No. of elements = row*col"<<endl;
    //Taking Input
    for(int i =0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }

  //printing output

  for(int i=0;i<row;i++){
      for(int j=0;j<col;j++){
          cout<<arr[i][j]<<" ";
      }cout<<endl;
  }


// Releasing memory
//colunm part relese
for(int i=0;i<row;i++){
    delete [] arr[i];
}

//row part relaese
  delete []arr;


// How to create a 2D array dynamically
// Input/Output krna
// Memory release krna
    return 0;
}