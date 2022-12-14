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
    void dfs(TreeNode *node, vector<int> &inorder) {
        if(node == NULL) 
            return; 
        
        dfs(node->left, inorder); 
        inorder.push_back(node->data); 
        dfs(node->right, inorder); 
    }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> inorder;
        dfs(root, inorder);
        return inorder; 
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
    vector<int> ans = obj1.inorderTraversal(root);

    for (int i = 0; i < ans.size(); i++){
        cout << ans[i] <<" ";
    }

    return 0;
}


// Iterative method

/*
class Solution {

public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> st; 
        TreeNode* node = root;
        vector<int> inorder; 
        while(true) {
            if(node != NULL) {
                st.push(node); 
                node = node->left; 
            }
            else {
    
                if(st.empty() == true) break; 
                node = st.top(); 
                st.pop(); 
                inorder.push_back(node->val); 
                node = node->right; 
            }  
        }
        return inorder; 
    }
};
*/
