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
    TreeNode* buildTree(vector<int>& preo, vector<int>& ino){
        unordered_map<int, int>inM;
        for (int i=0;i<ino.size();i++){
            inM[ino[i]]=i;
        }
        return buildTree(preo,0,preo.size()-1,ino,0,ino.size()-1,inM);
    }
    
    TreeNode* buildTree(vector<int>&preo,int preS,int preE,vector<int>&ino,int inS,int inE,unordered_map<int,int>&inM){
        if (preS>preE||inS>inE){
            return nullptr;
        }       
        int rootVal=preo[preS];
        TreeNode* root=new TreeNode(rootVal);    
        int rootII=inM[rootVal];
        int leftSS=rootII-inS;      
        root->left=buildTree(preo,preS+1,preS+leftSS,ino,inS,rootII-1,inM);
        root->right=buildTree(preo,preS+leftSS+1,preE,ino,rootII+1,inE,inM);
        return root;
    }
};