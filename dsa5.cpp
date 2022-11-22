#include <iostream>
using namespace std;

int main(){
    
    /************** Bitwise operators ********************/
 /*int a = 4;
 int b= 6;

 int c = a&b;
 int d = a|b;
 int e = ~a;
 int f = a^b;
 cout<<"a&b "<<c<<endl; // or in this way ,cout<<"a&b"<< (a&b)<<endl;
 cout<<"a|b "<<d<<endl;
 cout<<"~a "<<e<<endl;
 cout<<"a^b "<<f<<endl;*/
/********** left & right shift *****************/

/* cout<<(19<<1)<<endl;
cout<<(21<<2)<<endl;
cout<<(17>>1)<<endl;
cout<<(17>>2)<<endl; */

/************** increment & decrement operator *************/

/* int i= 7;
cout<<(++i)<<endl;
//8
cout<<(i++)<<endl;
//8 and 8++=9
cout<<(i--)<<endl;
//9 and 9--= 8
cout<<(--i)<<endl;
//7 bcoz --8=7  */

 /*int i =4;
 cout<<i<<endl;
 //int a = i++;
 //cout<<a<<endl;
 int b=++i;
 cout<<b<<endl;
*/


/***************** for loop **************/

/*int n;
cout<<"enter the value of n"<<endl;
cin>>n;


int i=1;

for(;;){
    if(i<=n){
        cout<<i<<endl;
    }
    else{
        break;
    }
    i++;
}
*/

/* for (int a=0,b=1,c=2;a>=0 && b>=1 && c>=2;a--,b--,c--){
      cout<<a<<" "<<b<<" "<<c<<" "<<endl;
  }*/

/* int n;
cout<<"enter the value of n"<<endl;
cin>>n;

int sum =0;

for(int i=0;i<=n;i++){
    //sum=sum+1; 
    sum += i;
}
cout<<sum<<endl;
*/


/*
//printing fibonacci series

int n=10;

int a=0;
int b=1;

cout<<a<<" "<<b<<" ";

for(int i =1; i<=n; i++){
    int  nextNumber = a+b;
    cout<<nextNumber<<" ";

    a=b;
    b=nextNumber;
}
*/


// prime or not

/*
int n;
cout<<"enter the value of n"<<endl;
cin>>n;

bool isprime = 1;

for(int i=2; i<n;i++){
   
   if(n%i==0){
       isprime=0;
       break;
   }
}

if (isprime==0){
    cout<<"it is not a prime number "<<endl;
}
else{
    cout<<"this is a prime number "<<endl;
}
*/
/*
for(int i=0;i<5;i++){
   cout<<"Hi"<<endl;
   cout<<"Hey"<<endl;

   continue;
   cout<<"reply to karde"<<endl;
}
*/



/*************** Variable scoping *******************/
/* int a=3;
cout<<a<<endl;

if(true){
    int b=5;
    cout<<b<<endl;
}

int b=1;
cout<<b<<endl;
//int b=3;
cout<<b<<endl;

int i=7;

for(int i=0;i<8;i++){
    cout<<"Hi"<<endl;
}
*/

}