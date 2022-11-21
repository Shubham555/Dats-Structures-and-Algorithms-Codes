#include <iostream>
using namespace std;

int main (){

/* 1. int n;
      cin>>n;

    int i =1;

    while(i<=n){

        int j=1;
        while(j<=n){
            cout<<j;   //for ulta cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }  */
/*output: if input n=4;
           1234
           1234
           1234
*/

/* 2.  int n;
       cin>>n;

   int i=1;
   int count=1;

   while(i<=n){
       
       int j=1;
       while(j<=n){
           cout<<count<<" ";
           count=count+1;
           j=j+1;
       }
       cout<<endl;
       i=i+1;
   }
   */
/*output: if input n=3   & if n= 5
           1 2 3        1 2 3 4 5 
           4 5 6        6 7 8 9 10
           7 8 9        11 12 13 14 15
                        16 17 18 19 20
                        21 22 23 24 25

*/

/*3. int n;
     cin>>n;

int row=1;

while(row<=n){

    int col =1;
    while(col<=row){
        cout<<"*";
        col=col+1;
    }
    cout<<endl;
    row=row+1;
} */

/*output: if input n=5;
            *
            **
            ***
            ****
            *****
*/


/*4. int n;
     cin>>n;

int row=1;

while(row<=n){

    int col =1;
    while(col<=row){
        cout<<row;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
} */

/*output: if input n=5;
           1
           22
           333
           4444
           55555
*/


/*5.int n;
    cin>>n;

int row=1;
int count=1;

while(row<=n){

    int col =1;
    while(col<=row){
        cout<<count<<" ";
        count=count+1;
        col=col+1;
    }
    cout<<endl;
    row=row+1;
} 
*/

/*output: if input n=5;
         
        1 
        2 3
        4 5 6
        7 8 9 10
        11 12 13 14 15
         
*/



/*6. int n;
    cin>>n;

int row=1;

while(row<=n){
// 1st Logic:

    int col=1;
    int value=row;

    while(col<=row){
     cout<<value<<" ";
     value=value+1;
     col=col+1;
    }
    cout<<endl;
    row=row+1; 

// 2nd Logic: without using int value
    int col=1;

    while(col<=row){
     cout<<row+col-1<<" ";
    
     col=col+1;
    }
    cout<<endl;
    row=row+1;

} */

/*output: if input n=6;
         
       1
       2 3
       3 4 5
       4 5 6 7
       5 6 7 8 9
       6 7 8 9 10 11 
         
*/




/*7. int n;
    cin>>n;

int row=1;

while(row<=n){

    int col=1;

    while(col<=row){
    cout<<row-col+1<<" ";
     col=col+1;
    }
    cout<<endl;
    row=row+1;

} */

/*output: if input n=4;
         
         1 
         2 1
         3 2 1
         4 3 2 1
         
*/

/*8.int n;
    cin>>n;

int row=1;

while(row<=n){
    int col=1;

    while(col<=n){
    char ch= 'A'+row-1;
    cout<<ch;
    col=col+1;
    }
   cout<<endl;
   row=row+1;
}
*/

/*output: if input n=5;
        AAAAA
        BBBBB
        CCCCC
        DDDDD
        EEEEE
         
*/


}