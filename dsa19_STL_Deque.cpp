/******************** Dynamic Data structure *****************/ // Run time changes kr skte.
#include <iostream>
#include <deque>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_front(2);

  /*  for(int i:d){
        cout<< i <<" ";
    } cout<<endl;  */

  // d.pop_front();

  /*  for(int i:d){
        cout<< i <<" ";
    } */
  
    cout<<"element at 1st index is "<< d.at(1) <<endl;

    cout<<"first element "<<d.front()<<endl;
    cout<<"last element "<<d.back()<<endl;

    cout<<"deque is empty or not "<< d.empty()<<endl;

    cout<<"size/No. of elements before erase "<< d.size() <<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"size/No. of elements before erase "<< d.size() <<endl;
    
    cout<<"max_size of deque "<< d.max_size() <<endl;
    
    for(int i:d){
        cout<<"remaining element after erase "<<i<<" ";
    }cout<<endl;




    return 0;
}