/*
Set - In set data structure--> values are stored at only once in the memory
      either they are repeted or not.
*/
#include<iostream>
#include<set>
using namespace std;

int main(){

    set<int> s;
   
    s.insert(5);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    s.insert(0);
    s.insert(5);
    
    for(int i:s){
        cout<< i<<" ";
    }cout<<endl;

    cout<<s.size()<<endl;

    set<int> :: iterator it = s.begin();
    it++;
    
    s.erase(it);

    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"5 is present or not--> "<<s.count(5)<<endl;

    set<int> :: iterator  itr = s.find(5);  // iska(5) ka iterator ko suppose krke print kiye to ye and iske aage ke print hoge.

    for(auto it= itr ; it!= s.end();it++){ // "find" function always returns address that why we are usuing ' * ' while printing.
       cout<< *it <<" ";
    }cout<<endl;
    
    cout<<s.size()<<endl;  // Size 3 he aayegi kyoki printing ke liye pointing change ki hogi lekin no. of elements to same hai. not erased na

    return 0;
}