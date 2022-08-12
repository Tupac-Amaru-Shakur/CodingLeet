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
    
    bool calc_disp(TreeNode *root1, TreeNode *root2){
        if(root1==NULL && root2==NULL){
            return true;
        }
        
        if(root1==NULL || root2==NULL){
            return false;
            
        }
        if(root1->val!=root2->val){
            return false;
        }
        
        if(!calc_disp(root1->left,root2->right) || !calc_disp(root1->right, root2->left)){
            return false;
        }
        
        return true;
        
    }
    bool isSymmetric(TreeNode* root) {
        return calc_disp(root,root);
    }
};