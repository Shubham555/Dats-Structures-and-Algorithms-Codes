#include <iostream>
using namespace std;


void printArray(int arr[],int size){
   
    cout<<"printing array "<<endl;
    //print the array
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] <<" ";
    }
     cout<<"printing  done "<<endl;
}

int main()
{
    // Declare array
    int number[15];
    // accessing an element of array
    cout << "value of index 14 is " << number[14] << endl;

    // Declare & initialization of array
    int second[3] = {1, 7, 11};
    // accessing an element of array
    cout << "value of at index 2  is " << second[2] << endl;
    
    int third[15] = {2, 7, 5, 7, 8, 9};
  //  printArray(third,15);
    int thirdsize = sizeof(third)/sizeof(int);  // size of array.
    cout<<"size of third is "<<thirdsize<<endl;

    int  fourth[10] = { 0 };// initiazling all locations with 0;
  //  printArray(fourth,10);

    int fifth[10]={1}; // initiazling all locations with 1 [not possible bs ek pahla element initialize hoga];
  //  printArray(fifth,10);
    int fifthsize = sizeof(fifth)/sizeof(int); // size of array.
    cout<<"size of fifth is "<<fifthsize<<endl;
  

    char ch[5]= {'a','b','c','d','e'};
    cout<<ch[2]<<endl;

    cout<<"printing array "<<endl;
    //print the array
    for (int i = 0; i < 5 ; i++)
    {
        cout << ch[i] <<" ";
    }
     cout<<"printing  done "<<endl;


    float firstfloat[8];
    double firstdouble[6];
    bool firstbool[5];




    cout<< endl << "everything is fine "<<endl<<endl;


    return 0;
}