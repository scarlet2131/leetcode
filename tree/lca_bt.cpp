
//MLE on leetcode refer the optimized version

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> >g;
TreeNode *s;
void search(TreeNode* root,int x)
{
    if(root==NULL)
        return;
    if(root->val==x)
    {
        s = root;
    }
   search(root->left,x);
   search(root->right,x);
}
void path(TreeNode* root, TreeNode* p,vector<int> x)
{
    if(root==NULL)
        return;
    if(root==p)
    {
        x.push_back(root->val);
        g.push_back(x);
       return; 
    }
      
    x.push_back(root->val);
    path(root->left,p,x);
    path(root->right,p,x);
    
}
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        g.clear();
        vector<int> x;
         path(root,p,x);
        x.clear();
        path(root,q,x);
        int m=min(g[0].size(),g[1].size());
        int f=-1;
        for(int i=0;i<g.size();i++)
        {
            for(int j=0;j<g[i].size();j++)
            {
                cout<<g[i][j]<<" ";
            }
            cout<<endl;
        }
        for(int i=0;i<m;i++)
        {
            if(g[0][i]!=g[1][i])
            {
                f=i-1;
                break;
            }
        }
        // cout<<f<<" "<<g[0][f]<<endl;
        if(f==-1)
            search(root,g[0][m-1]);
        else
            search(root,g[0][f]);

        return s;
        }
};