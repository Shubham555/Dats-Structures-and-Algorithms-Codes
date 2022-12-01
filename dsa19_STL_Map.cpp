/*
Map - It has pair of "Key and Value".
      just like below - Int and string ki pair banadi.
*/
#include<iostream>
#include<map>
using namespace std;

int main(){
  
    map<int,string> m;

    m[2] = "Babbar";
    m[13] = "kumar";
    m[1] = "love";
   
    m.insert( {5,"Bheem"} );
    
   cout<<"Before earse "<<endl;
   for(auto i:m){
       cout<<i.first<<" " <<i.second<<endl;
   }cout<<endl;

    cout<<"13 present or not --> "<<m.count(13)<<endl;

    m.erase(13);
    cout<<"After earse "<<endl;
    for(auto i:m){
       cout<<i.first<<" " <<i.second<<endl;
    }cout<<endl;

    auto it = m.find(2); // "find" function always returns address that why we are usuing ' * ' while printing.

    for(auto i = it; i!=m.end() ;i++){
      cout<<(*i).first<<" "<<(*i).second<<endl;
    }

        return 0;
}