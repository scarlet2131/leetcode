//recursive method to check;

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool sym(TreeNode* l,TreeNode* r)
{
  
        if(l==NULL and r==NULL )
        {
            return true;
        }
        // if((l->left==NULL and l->right!=NULL) or(l->right==NULL and l->left!=NULL) or (r->left==NULL and r->right!=NULL) or (r->right==NULL and r->left!=NULL))
        //     return false;
        if((l==NULL and r!=NULL)or (l!=NULL and r==NULL))
            return false;
        if(l->val==r->val)
        {
            return sym(l->left,r->right) and sym(l->right,r->left);
        }
    return false;
         
}
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
     bool ans=sym(root,root);
        return ans;
    }
};



//Iterative method using queue
bool symmetric(TreeNode* p,TreeNode* q)
{
    queue<TreeNode*,TreeNode* > g;
    q.push({p,q});
    while(!g.empty())
    {
        pair<TreeNode*,TreeNode*> x=g.top();
        g.pop();
        TreeNode* f=x.first;
        TreeNode* s=x.second;
        if(f->val!=s->val)
        {
            return false;
        }
        if(f->left==NULL and r->right!=NULL ||)
        if(f->left and s->right)
        {
            g.push({f->left,s->right});

        }
        if(f->right and s->left)
        {
            g.push({f->right,s->left});

        }
        
    }
}
