#include<iostream>
using namespace std;

int main(){

    int arr[6] = {1,2,3,4};
    char ch[6] = "abcde";  //-> this assigning format automatically gives '\0'.

    cout<< arr <<endl; 
    //attention here
    cout<< ch <<endl;
   
    char* c = &ch[0];  // <-- it gives address of starter & prints c whole -output string. 

    // prints entire array not address
    cout<< c << endl;

    char temp = 'z'; // normal format.

    char* p = &temp ;
    cout<< p << endl;  


    return 0;
}