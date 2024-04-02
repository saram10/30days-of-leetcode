/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root){
            return true;
        }
        return isMirror(root->left,root->right);
    }
    bool isMirror(TreeNode* left,TreeNode* right){
        if(!right&&!left){
            return true;
    }
        if(!right||!left){
            return false;
        }
        if(right->val!=left->val){
            return false;
        }

        return isMirror(left->right,right->left)&&isMirror(left->left,right->right);
    }
};
