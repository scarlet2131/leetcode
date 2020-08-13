/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */


//iterative method--------------------------------------

int sol(TreeNode* root)
{
    if(root==NULL)
        return 0;
    int a=root->val;
    if(root->left)
        a+=sol(root->left->left)+sol(root->left->right)  ;
    if(root->right)
        a+=sol(root->right->right)+sol(root->right->left);
     int b = sol(root->left) + sol(root->right);
    return max(a,b);
    
}
class Solution {
public:
    int rob(TreeNode* root) {
      
       return sol(root);
    }
};

//memoised method-------------------------------------------

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
map<TreeNode*,int> g;
int sol(TreeNode* root)
{
    if(g.find(root)!=g.end())
        return g[root];
    if(root==NULL)
        return 0;
    int a=root->val;
    if(root->left)
        a+=sol(root->left->left)+sol(root->left->right)  ;
    if(root->right)
        a+=sol(root->right->right)+sol(root->right->left);
     int b = sol(root->left) + sol(root->right);
    g[root]=max(a,b);
    return g[root];
    
}
class Solution {
public:
    int rob(TreeNode* root) {
      
       return sol(root);
    }
};