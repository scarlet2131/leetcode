//this is o(n^2log(n)) and below one other is optimized

struct bst
{
    bst* left,*right;
    int val;
    int dup;
    bst(int x,int dup)
    {
        this->val=x;
        this->left=this->right=NULL;
        this->dup=0;
    }
};


int count(bst* root)
{
    if(root==NULL)
        return 0;
    return 1 + root->dup + count(root->left) + count(root->right);
}

int c;
bst* make_bst(bst* root,int x)
{
    if(root==NULL)
        return new bst(x,0);
    if(x<root->val)
    {
        root->left= make_bst(root->left,x);
    }
    else if(x>root->val)
    {
        c+=1+count(root->left)+root->dup;
        root->right=make_bst(root->right,x); 
    } 
    else
    {
        c += count(root->left);
        root->dup++;
    }
    return root;
}

class Solution {
public:
    vector<int> countSmaller(vector<int>& v) {
        bst* root=NULL;
        vector<int> ans;
            for(int i=v.size()-1;i>=0;i--)
            {
                c=0;
                root=make_bst(root,v[i]);
                ans.push_back(c);
            }
        reverse(ans.begin(),ans.end());
        return ans;
            
       
        
    }
};

//below is O(nlog(n))


struct bst
{
    int val;
    bst* left,*right;
    int dup;
    int lsize;
    // vector<int> ltree;
    bst(int val)
    {
        this->val=val;
        this->left=this->right=NULL;
        this->dup=0;
        this->lsize=0;
        
    }
};

int c;
bst* make_bst(bst* root,int x)
{
    if(root==NULL)
        return new bst(x);
    if(x>root->val)
    {
        c+=1+root->dup+root->lsize;
        root->right=make_bst(root->right,x);
    }
    else if(x<root->val)
    {
        root->lsize++;
       root->left= make_bst(root->left,x);
    }
    else
    {
        root->dup++;
        c+=root->lsize;
    }
    return root;
}

class Solution {
public:
    vector<int> countSmaller(vector<int>& v) {
        bst* root=NULL;
        vector<int> ans;
        for(int i=v.size()-1;i>=0;i--)
        {
            c=0;
            root=make_bst(root,v[i]);
            ans.push_back(c);
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
              
    }
};