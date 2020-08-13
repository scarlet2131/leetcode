//correct_comp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool inorder(TreeNode* p, TreeNode* q)
{
    if (p==NULL and q==NULL)
        return true;
    
    if((p==NULL and q!=NULL) or (p!=NULL and q==NULL))
        return false;
    
    if(p->val==q->val)
    {
        return inorder(p->left,q->left) and inorder(p->right,q->right);
    }
    return false;
}
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        bool ans=inorder(p,q);
        return ans;
    }
};


//wrong comparison 

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
bool inorder(TreeNode* p, TreeNode* q)
{
    if (p==NULL and q==NULL)
        return true;
    
    if((p==NULL and q!=NULL) or (p!=NULL and q==NULL))
        return false;
    
    if(p->val!=q->val)
        return false;
   return inorder(p->left,q->left) and inorder(p->right,q->right);
    
}
class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        
        bool ans=inorder(p,q);
        return ans;
    }
};


//Iterative method using queue

bool same(TreeNode* p, TreeNode* q)
{
    queue<pair<TreeNode*,TreeNode*> > qr;
    qr.push({p,q});
    while(!qr.empty())
    {
        pair<TreeNode*,TreeNode*> x = qr.front();
        qr.pop();
        
        TreeNode* f=x.first;
        TreeNode* s=x.second;
        
        if(f->val!=s->val)
            return false;
        if(f->left and s->left)
        {
            qr.push({f->left,s->left});
        }
        if(f->right and s->right)
        {
            qr.push({f->right,s->right});
        }
        if((f->left==NULL and s->left!=NULL) or(f->right==NULL and s->right!=NULL) or (f->left!=NULL and s->left==NULL) or (f->right!=NULL and s->right==NULL))
            return false;
        
    }
    
   
    return true;
    
}