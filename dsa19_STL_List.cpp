#include<iostream>
#include<list>
using namespace std;

int main(){
     
    list<int> l;

    list<int> n(5,100);
    cout<<"printing list n"<<endl;
    for(int i:n){
        cout<< i<<" ";
    } cout<<endl;

    l.push_back(1);
    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    } cout<<endl;


    l.erase(l.begin()); //l.erase(l.end()); check ones plz ha.

    cout<<"after erase ";
    for(int i:l){
        cout<<i<<" ";
    } cout<<endl;

    cout<<"size/No. of elements in list "<<l.size()<<endl; 

    return 0;
}