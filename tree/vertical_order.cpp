/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
map<int,vector<pair<int,int>>> v;
void vertical(TreeNode* root,int x,int d)
{

    if(root==NULL)
        return;
    v[x].push_back({root->val,d});
     
    vertical(root->left,x-1,d+1);
    vertical(root->right,x+1,d+1);
    
   
   
}
bool comp(pair<int,int> a,pair<int,int> b)
{
    return a.second<b.second or (a.second==b.second and a.first<b.first);
}
class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        v.clear();
        vertical(root,0,0);
       
        
        vector<vector<int>> ans;
        int c=0;
          map<int,vector<int>> f;
            for(auto it=v.begin();it!=v.end();it++)
            {
                 cout<<it->first<<" ";
                sort(it->second.begin(),it->second.end(),comp);
                vector<pair<int,int> > g = it->second;
                vector<int> temp;
                for(int i=0;i<g.size();i++)
                    temp.push_back(g[i].first);
                ans.push_back(temp);
               
                cout<<endl;
            }
        
        // for(auto it=f.begin();it!=f.end();it++)
        //     ans.push_back(it->second);
      
    
        // for(int i=0;i<ans.size();i++)
        // {
        //     for(int j=0;j<ans[i].size();j++)
        //     {
        //         cout<<ans[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return ans;
    }
};