/******************** Dynamic Data structure *****************/// Run time changes kr skte.
#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v;

    vector<int> a(5,1);    // a.(capacity/size , initializing value)

    //copying one vector in another.
    vector <int> last(a);  
    cout<<"Printing last vector"<<endl;
    for(int i:last){
        cout<< i <<" ";
    }cout<<endl;
    

    cout<<"Capacity of vector "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity of vector "<<v.capacity()<<endl;
    
    v.push_back(2);
    cout<<"Capacity of vector "<<v.capacity()<<endl;

    cout<<"size 2 se 4 hogi ab ,vector 'direct double' kr keta hai na khud ko capacity badhane ke liye "<<endl;

    v.push_back(3);
    cout<<"Capacity of vector "<<v.capacity()<<endl;
    cout<<"size of vector(No. of elements) "<<v.size()<<endl;

    cout<<"Element at 2nd index "<<v.at(2)<<endl;

    cout<<"first element "<<v.front()<<endl;
    cout<<"last element "<<v.back()<<endl;

    cout<<"Before pop_back "<<endl;
    for(int i:v){
        cout<< i <<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"after pop_back "<<endl;
    for(int i:v){
        cout<< i <<" ";
    }cout<<endl;
    

    cout<<"Before clear size is "<<v.size()<<endl;
    v.clear();
    cout<<"Before clear size is "<<v.size()<<endl;
    cout<<"But its Capacity remains same -> "<<v.capacity();
    return 0;
}