/******************** Non-Dynamic Data structure ***************/// Run time changes nhi kr skte.
#include<iostream>
#include<array>
using namespace std;

int main(){

  int basic[4] ={1,2,3,4};

  array<int,4> a = {1,2,3,4};

  int length = a.size();  //ab length = 4 hogaya hoga.

  for(int i=0;i<length;i++){     // 0-->3 = 0,1,2,3 (4 length).
      cout<<a[i]<<endl;
     
  }
  
  cout<<"element at 2nd index "<<a.at(2)<<endl;
  cout<<"array empty or not "<<a.empty()<<endl;

  cout<<"first element "<<a.front()<<endl;
  cout<<"last element "<<a.back()<<endl;

 return 0;
}