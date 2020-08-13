/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int> > v;
        queue<TreeNode*> q;
        if(root==NULL)
        {
            return v;
        }
        
        
        q.push(root);
        
        while(!q.empty())
        {
            
             int n=q.size();
             vector<int> g;
            for(int i=0;i<n;i++)
            {
                TreeNode* x= q.front();
                q.pop();
                g.push_back(x->val);
                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
                
            }
            v.push_back(g);
        }
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[i].size();j++)
            {
                cout<<v[i][j]<<" ";
            }
            cout<<endl;
        }
        
       
    
        return v;
        
    }
};