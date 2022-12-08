#include<iostream>
#include<string>
using namespace std;

/*
// Recursively Reverse a string
void ReverseString(int i,int j,string &s){

     cout<<"change occured is "<<s<<endl;

      //base case
      if(i>j){
          return ;
      }
      swap(s[i],s[j]);
      i++;
      j--;
      // R.R
     ReverseString(i,j,s);
   
} 

int main(){
    string s;
    cout<<"Enter the string "<<endl;
    cin>>s;
    
    cout<<endl;
    ReverseString(0,s.length()-1,s);
    cout<<endl;

    cout<<"reversed string is "<<s<<endl;
    return 0;
} */


/*
//Recursively check palindrome.

bool checkpalindrome(string str,int i,int j){
    //base case
    if(i>j){
        return true;
    }
    if(str[i] != str[j]){
        return false;
    }
    else{
        // Recursively call
        return checkpalindrome(str,i+1,j-1);
    }
}

int main(){

    string str = "abbccbba";
    
    bool isPalindrome = checkpalindrome(str,0,str.length()-1);
    
    cout<<endl;
    if(isPalindrome){
        cout<<"this "<<str<<" is a palindrome "<<endl;
    }
    else{
        cout<<"this "<<str<<" is not a palindrome "<<endl;
    }
    return 0;
}*/


/*
//Recursively Calculating power

int power(int a , int b){
    //base case 
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    int ans = power(a,b/2);
   
   //if b is even
    if(b%2==0){
       return ans *ans;
    }
    else{
        return a * (ans*ans);
    }
}

int main(){
  int a,b;
  cout<<"enter the values of a and b "<<endl;
  cin>>a>>b;

  int ans = power(a,b);

  cout<<"power of "<<a<<" to the "<<b<<" is = "<<ans<<endl;


    return 0;
} */


//Recursively bubble sort. 
void BubblesortArray(int arr[], int n ){
    
    // base case - for already sorted
    if(n==0 || n==1){
        return ;
    }

   // 1 case solve krlia - largest element ko end me rakh dega.
    for(int i =0;i< n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    
    //Recursive call
    BubblesortArray(arr,n-1);
}

int main(){
    int arr[5] = {2,1,4,8,5};

    BubblesortArray(arr,5);

  for(int i=0;i<5;i++){
      cout<<arr[i]<<" ";
  }

    return 0;
}