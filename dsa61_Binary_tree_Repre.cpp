#include<iostream>
using namespace std;

struct TreeNode{

    int data;
    struct TreeNode* left;
    struct TreeNode* right;

    TreeNode(int val){
    data = val;
    left=right=NULL;
   }
};


int main(){

struct TreeNode* root = new TreeNode(1);

root->left = new TreeNode(2);
root->right = new TreeNode(3);
root->left->right= new TreeNode(5);

//printing in just Simple way:)
cout<<root->data<<endl;
cout<<root->left->data<<endl;
cout<<root->right->data<<endl;
cout<<root->left->right->data<<endl;    
    return 0;
}
