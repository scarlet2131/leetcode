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
void get_path(TreeNode* root,vector<int> g)
{
    TreeNode* l=root;
    if(root==NULL)
        return ;
    if(l->left==NULL and l->right==NULL)
    {
        g.push_back(l->val);
        v.push_back(g);
        return;
    }
    g.push_back(l->val);
    get_path(l->left,g);
    
    get_path(l->right,g);
}
int make_num(vector<int> n)
{
    int ans=0;
    for(int i=0;i<n.size();i++)
    {
        ans=ans+(pow(10,n.size()-i-1)*n[i]);
    }
    return ans;
}
class Solution {
public:
    int sumNumbers(TreeNode* root) {
        vector<int> g;
        v.clear();
        get_path(root,g);
        int sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=make_num(v[i]);
        }
        return sum;
        
    }
};