#include<iostream> 
using namespace std;

bool search(int arr[],int size,int key){

    for(int i=0; i<size; i++){

        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}

int main(){
    int  arr[10] = {12, 43, -4, 15, 23, -9, 0, 41, 22, 55};
     
    cout<<"Enter  the key you want to search "<<endl;
    int key;
    cin>>key;

    bool found = search(arr,10,key);

    if (found){
        cout<<"key is present "<<endl;
    }
    else{
        cout<<"key is absent "<<endl;
    }
    return 0;
}