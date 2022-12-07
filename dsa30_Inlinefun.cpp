/*************************** Inline Function **********************/

// We can make Inline Function with its function body of only "one line". OR maximum 2-3 lines.
// Cannot make Inline function with its function body of "More than 3 lines".

#include<iostream>
using namespace std;

inline int getmax(int& a,int& b){
    return (a>b) ? a : b;
}

int main(){
   int a = 1,b = 2;
   int ans = 0;

   ans = getmax(a,b);  // Before Compilation starts -> Automatically this call body will replaced by "(a>b) ? a : b;" <-function Body. bcoz it is Inline function.
   cout<< ans <<endl;
   a = a+3;
   b = b+1;

   ans =getmax(a,b);
   cout<< ans <<endl;


   return 0;
}