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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums,0,nums.size()-1);
    }
    TreeNode* sortedArrayToBST(vector<int>&nums,int s,int e){
        if(s>e){
            return nullptr;
        }
        int m=(s+e)/2;
        TreeNode* pntr=new TreeNode(nums[m]);
        pntr->left=sortedArrayToBST(nums,s,m-1);
        pntr->right=sortedArrayToBST(nums,m+1,e);
        return pntr;
    }
    void printTreeInOrder(TreeNode* pntr){
        if(pntr){
            printTreeInOrder(pntr->left);
            cout<<pntr->val<<" ";
            printTreeInOrder(pntr->right);
        }
    }
};