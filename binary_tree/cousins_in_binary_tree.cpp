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
TreeNode* parent(TreeNode* root,int x)
{
    if(root==NULL)
        return root;
    if(root->left or root->right)
    {
        if(root->left and root->left->val==x )
            return root;
        else if(root->right and root->right->val==x)
            return root;
    }
    TreeNode* l= parent(root->left,x);
    TreeNode* r= parent(root->right,x);
    if(l)
        return l;
    return r;
    
}
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        TreeNode* px = parent(root,x);
        TreeNode* py = parent(root,y);
        // cout<<px->val<<" "<<py->val<<endl;
        if(px!=py)
        {
            queue<TreeNode* > q;
            q.push(root);
            int c=0;
            while(!q.empty())
            {
                int f1=0,f2=0;
                int currS=q.size();
                for(int i=0;i<currS;i++)
                {
                    TreeNode* temp = q.front();
                    q.pop();
                    if(temp->val==x)
                        f1=1;
                    if(temp->val==y)
                        f2=1;
                    if(temp->left)
                    {
                        q.push(temp->left);
                    }
                    if(temp->right)
                    {
                        q.push(temp->right);
                    }
                }
                if(f1==1 and f2==1)
                {
                    return true;
                }
                
            }
        }
        return false;
    }
};