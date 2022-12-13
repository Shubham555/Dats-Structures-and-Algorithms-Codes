#include<iostream>
#include<vector>
#include<queue>
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
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int>> ans; // Our final returning answer who is vector & store vectors in it self.
        if(root == NULL) return ans; 
        
        queue<TreeNode*> q; 
        q.push(root); 
        while(!q.empty()) {
            int size = q.size();
            vector<int> level; 
            
            for(int i = 0;i<size;i++) {
                TreeNode *node = q.front(); 
                q.pop(); 
                if(node->left != NULL) q.push(node->left); 
                if(node->right != NULL) q.push(node->right); 
                level.push_back(node->data); 
            }
            ans.push_back(level); 
        }
        return ans; 
    }
};


int main(){


    return 0;
}