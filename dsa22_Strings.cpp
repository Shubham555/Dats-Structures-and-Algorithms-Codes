#include <iostream>
#include<string>
using namespace std;

char ToLowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool Checkpalindrome(char name[], int n){
  int s =0;
  int e =n-1;
  
  while(s<=e){
  if(ToLowercase( name[s] ) != ToLowercase( name[e] ) )
  {
      return 0;
  }
  else{
      s++;
      e--;
   }
 }
  return 1;
}

void reverse(char name[], int n){
    int s=0;
    int e=n-1;
    
    while(s<e){
        swap(name[s++],name[e--]);
    }

}

int getlength(char name[]){
    int count = 0;

    for(int i=0; name[i] != '\0';i++){
        count++;
    }
    return count;
}
int main(){

    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;

  //  name[2] = '\0';
    cout<<"Your name is ";
    cout<<name<<endl;
    
    int n = getlength(name);
    cout<<"Length of string is "<<n<<endl;
    
    reverse(name,n);
    cout<<"your name after reverse is ";
    cout<<name<<endl;
    
    cout<<"check palidrome returned "<<Checkpalindrome(name,n)<<endl;

  //  cout<<"character is "<<ToLowercase('b')<<endl;
     cout<<"character is "<<ToLowercase('B')<<endl;

    return 0;
}