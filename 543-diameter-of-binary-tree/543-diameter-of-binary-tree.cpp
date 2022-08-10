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
    
    int calc_disp(TreeNode *root, int &diam){
        if(!root){
            return 0;
        }
        
        int lh=calc_disp(root->left,diam);
        int rh=calc_disp(root->right,diam);
        
         diam=max(diam,lh+rh);
        
        return 1+max(lh,rh);
         
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int diam=0;
        calc_disp(root,diam);
        return diam;
    }
};