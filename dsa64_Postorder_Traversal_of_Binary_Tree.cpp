#include<iostream>
#include<vector>
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

 
class Solution {
    private:
    void dfs(TreeNode *node, vector<int> &postorder) {
        if(node == NULL) 
          return; 
        
        dfs(node->left, postorder); 
        dfs(node->right, postorder); 
        postorder.push_back(node->data); 
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        dfs(root, postorder);
        return postorder; 
    }
};


int main(){
   
    //Giving input to tree For its Traversal.
    struct TreeNode *root = new TreeNode(1);

    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    // uppar jis vec. me preorder traversal ke value push. kiye the uss Vector ko apne vec. me copy krke print kar rahe :)
    Solution obj1;
    vector<int> ans = obj1.postorderTraversal(root);

    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] <<" ";
    }
    return 0;
}


//iterative methods.

/*Using 2 stacks
class Solution {

public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if(root == NULL) return postorder;
        stack<TreeNode*> st1, st2; 
        st1.push(root); 
        while(!st1.empty()) {
            root = st1.top(); 
            st1.pop();
            st2.push(root); 
            if(root->left != NULL) {
                st1.push(root->left); 
            }
            if(root->right != NULL) {
                st1.push(root->right); 
            }
        }
        while(!st2.empty()) {
            postorder.push_back(st2.top()->val); 
            st2.pop(); 
        }
        return postorder;
    }
}; */

/*Using 1 stack
class Solution {

public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if(root == NULL) return postorder;
        stack<TreeNode*> st1;
        TreeNode* current = root;  
        while(current != NULL || !st1.empty()) {
            if(current != NULL){
                st1.push(current);
                current = current->left;
            }else{
                TreeNode* temp = st1.top()->right;
                if (temp == NULL) {
                    temp = st1.top();
                    st1.pop(); 
                    postorder.push_back(temp->val);
                    while (!st1.empty() && temp == st1.top()->right) {
                        temp = st1.top();
                        st1.pop(); 
                        postorder.push_back(temp->val);
                    }
                } else {
                    current = temp;
                }
            }
        }
        return postorder;
    }
};
*/




