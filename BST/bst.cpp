#include<bits/stdc++.h>
using namespace std;
struct bst
{
	bst* left,*right;
	int val;
	bst(int val)
	{
		this->val=val;
		this->left=this->right=NULL;
	}
};
bst* insert(bst* root,int x)
{
	if(root==NULL)
		return new bst(x);
	if(x>root->val)
		root->right = insert(root->right,x);
	else
		root->left = insert(root->left,x);
	return root;

}
bst* search(bst* root,int x)
{
	if(root==NULL)
		return NULL;
	if(x>root->val)
		search(root->right,x);
	else if(x<root->val)
		search(root->left,x);
	else
		return root;
}
void print(bst* root)
{
	if(root==NULL)
		return;
	print(root->left);

	cout<<root->val << " ";
	
	print(root->right);
}

int mi(bst* t,bst *prev)
{
	if(t==NULL)
		return prev->val;
	mi(t->left,t);

}

int inorder_successor(bst* root,bst* z,int succ)
{
	
	if(z->right)
	{
		return mi(z->right,z->right);
	}
	else
	{
		if(root==NULL)
			return succ;
		
		if(root->val<z->val)
		{
			inorder_successor(root->right,z,succ);
		}
		else
		{
			if(root->val>z->val  and root->val<succ)
			{
				succ=root->val;
			}
			inorder_successor(root->left,z,succ);
		}
	}
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		bst* root=NULL;
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n;i++)
		{
			root=insert(root,a[i]);
		}
		print(root);
		// int s;

		// for(int i=0;i<5;i++)
		// {
		// 	cin>>s;
		// 	bst* x=search(root,s);
		// 	if(x==NULL)
		// 	{
		// 		cout<<"search: "<< x;
		// 	}
		// 	else
		// 	{
		// 		cout<<"search: "<< x->val;
		// 	}
			
		// }
		int z;
		for(int i=0;i<5;i++)
		{
			cin>>z;
			bst* t=search(root,z);
			cout<<inorder_successor(root,t,1000)<<endl;
		}
		


	}
}