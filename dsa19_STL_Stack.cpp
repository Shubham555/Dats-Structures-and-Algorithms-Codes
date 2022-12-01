#include<iostream>
#include<stack>
using namespace std;

int main(){

 // stack<int> s;
    stack<string> s;

    s.push("love");
    s.push("Babbar");
    s.push("kumar");
    
    cout<<"Top elemnet is "<< s.top() <<endl;

    s.pop();
    cout<<"Top elemnet is "<< s.top() <<endl;

    cout<<"Size/No. of elements in Stack "<<s.size()<<endl;

    cout<<"empty or not "<<s.empty()<<endl;

    return 0;
}