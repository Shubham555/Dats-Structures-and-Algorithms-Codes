#include <iostream>
#include <vector>
using namespace std;

struct TreeNode{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;

    TreeNode(int val){
    data = val;
    left = right = NULL;
    }
};

class Solution{
private:
    void dfs(TreeNode *node, vector<int> &preorder){
        if (node == NULL)
            return;

        preorder.push_back(node->data);
        dfs(node->left, preorder);
        dfs(node->right, preorder);
    }

public:
    vector<int> preorderTraversal(TreeNode *root){
        vector<int> preorder;
        dfs(root, preorder);
        return preorder;
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
    vector<int> ans = obj1.preorderTraversal(root);

    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] <<" ";
    }

    return 0;
}


// Iterative method 
/*

class Solution {

public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        if(root == NULL) return preorder; 
       
        stack<TreeNode*> st; 
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop(); 
            preorder.push_back(root->val); 
            if(root->right != NULL){
                st.push(root->right);
            }
            if(root->left!= NULL){
                st.push(root->left);
            }
        }
        return preorder; 
    }
};


*/