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
    
    int maxPathSum(TreeNode *root,int &maxx){
        if(root==NULL)return 0;
        
        int maxL=max(0,maxPathSum(root->left,maxx));
        int maxR=max(0,maxPathSum(root->right,maxx));
        
        maxx=max(maxx,maxL+maxR+root->val);
        
        return max(maxL,maxR)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int maxx=INT_MIN;
        
        maxPathSum(root,maxx);
        return maxx;
        
        
    }
};