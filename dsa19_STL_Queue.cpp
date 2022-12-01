#include<iostream>
#include<queue>
using namespace std;

int main(){
   
 //queue<int> q;
   queue<string> q;

   q.push("love");
   q.push("babbar");
   q.push("kumar");
   cout<<"size/ No. of elements in queue "<<q.size()<<endl;

   cout<<"First element is "<< q.front()<<endl;
   
   q.pop();
  
   cout<<"Front of q is "<< q.front()<<endl;
   
   cout<<"size/ No. of elements-after pop in queue "<<q.size()<<endl;
   cout<<"empty or not "<<q.empty()<<endl;

    return 0;
}