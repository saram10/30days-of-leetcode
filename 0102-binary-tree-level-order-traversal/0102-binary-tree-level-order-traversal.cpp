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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)
            return {};

        vector<vector<int>>ans;
        queue<TreeNode*>t;
        t.push(root);

        while(!t.empty()){
            int levelSize=t.size();
            vector<int>currentLevel;

       for(int i=0;i<levelSize;i++){
           TreeNode* node=t.front();
           t.pop();

           currentLevel.push_back(node->val);

           if(node->left)
               t.push(node->left);
           if(node->right)
               t.push(node->right);
      }
          ans.push_back(currentLevel);
    }

    return ans;
    }
};