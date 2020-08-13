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

//using stack !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> v;
        if(root==NULL)
            return v;
       
        queue<TreeNode*> q;
        q.push(root);
        int c=0;
        while(!q.empty())
        {
            vector<int> temp;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* x=q.front();
                q.pop();
                temp.push_back(x->val);
                if(x->left)
                    q.push(x->left);
                if(x->right)
                    q.push(x->right);
               
            }
            if(c%2==0)
                v.push_back(temp);
            else
            {
                reverse(temp.begin(),temp.end());
                 v.push_back(temp);
            }
                
            c++;   
        }
       
        return v;
    }
};