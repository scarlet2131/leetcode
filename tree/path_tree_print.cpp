/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int>> v;
void s(TreeNode* root, int sum,int ans,vector<int> g)
{
    TreeNode* l=root;
    if(root==NULL)
    {
        return;
    }
    if(l->left==NULL and l->right==NULL)
    {
        if(ans+l->val==sum)
        {
            g.push_back(l->val);
          
             v.push_back(g);
    
        }
        return;
    }
       
    g.push_back(l->val);
    s(l->left,sum,ans+l->val,g);
    
    // g.push_back(l->val);
    s(l->right,sum,ans+l->val,g);
   
}
class Solution {
public:
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        v.clear();
        vector<int>g;
        
        s(root,sum,0,g);
        return v;
    }
};