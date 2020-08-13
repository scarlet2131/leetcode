/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
int f=0;
bool s(TreeNode* root,int sum,int ans)
{
    TreeNode* l=root;
    if(root==NULL)
    {
        return false;
    }
    
    if(l->left==NULL and l->right==NULL)
    {
        cout << ans+l->val << endl;
        if(ans+l->val==sum)
        {
            return true;
        }
        return false;
    }
    
    return s(l->left,sum,ans+l->val) or s(l->right,sum,ans+l->val);
}
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
    
       
        bool ans=s(root,sum,0);
        return ans;
    }
    
};