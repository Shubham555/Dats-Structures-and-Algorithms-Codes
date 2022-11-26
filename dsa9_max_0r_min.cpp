#include<iostream>
using namespace std;

int getmin(int num[],int n){

    int mini =INT8_MAX;

    for(int i=0;i<n;i++){
        mini =min(mini,num[i]);  // bhayya Same logic hai iska bhi aurr commented ka bhi :).
       // if(num[i]< mini){
        //    mini=num[i];
       // }
    }
    return mini;
}

int getmax(int num[],int n){

    int maxi =INT8_MIN;

    for(int i=0;i<n;i++){

        maxi = max(maxi,num[i]);  // bhayya Same logic hai iska bhi aurr commented ka bhi :).
        //if(num[i]> maxi){
        //    maxi=num[i];
       // }
    }
    return maxi;
}



int main(){
    
    int size;
    cin>>size;

    int num[100];

     for(int i=0;i<size;i++){
         cin>>num[i];
     }

    cout<<"the maximum from num array is "<<getmax(num,size)<<endl;
    cout<<"the minimum from num array is "<<getmin(num,size)<<endl;
    return 0;
}