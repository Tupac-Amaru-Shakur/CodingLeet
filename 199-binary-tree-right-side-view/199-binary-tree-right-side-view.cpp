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
    vector<int> ans;
    void calc_disp(TreeNode*root, int level,vector<int>&ans){
        if(root==NULL)
            return;
        if(level==ans.size()){
            ans.push_back(root->val);
        }
        calc_disp(root->right,level+1,ans);
        calc_disp(root->left,level+1,ans);
    }
    vector<int> rightSideView(TreeNode* root) {
        
        calc_disp(root,0,ans);
        return ans;
        
    }
};