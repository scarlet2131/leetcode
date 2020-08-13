#include<bits/stdc++.h>
using namespace std;
struct tree
{
	tree* left,*right;
	int data;
	tree(int data)
	{
		this->data=data;
		this->left=this->right=NULL;
	}
};
void inorder(struct tree* root)
{

	struct tree* temp=root;
	if(temp==NULL)
	{
		return ;
	}
	inorder(temp->left);

	cout<<temp->data<<" ";

	inorder(temp->right);

}
void preorder(struct tree* root)
{
	struct tree* temp=root;
	if(temp==NULL)
	{
		return ;
	}
	cout<<temp->data<<" ";

	inorder(temp->left);

	

	inorder(temp->right);
}
void postorder(struct tree* root)
{
	struct tree* temp=root;
	if(temp==NULL)
	{
		return ;
	}
	
	
	inorder(temp->left);
	
	inorder(temp->right);
	
	cout<<temp->data<<" ";
}
void inorder_iter(struct tree* root)
{
	struct tree* temp=root;
	while()
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		struct tree* root = new tree(1);
		root->left = new tree(2);
		root->left->left = new tree(4);
		root->left->left->left = new tree(8);
		root->left->left->right= new tree(9);
		root->left->right= new tree(5);
		root->left->right->left=new tree(10);
		root->right= new tree(3);
		root->right->left= new tree(6);
		root->right->right= new tree(7);

		cout<<"INORDER"<<endl;
		inorder(root);
		cout<<"PREORDER"<<endl;
		preorder(root);
		cout<<"POSTORDER"<<endl;
		postorder(root);
	}
}