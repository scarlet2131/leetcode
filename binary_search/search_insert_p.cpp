#include<bits/stdc++.h>
using namespace std;
int bin_search(int a[],int k,int l,int r)
{
	while(l<=r)
	{
		int mid =(l+r)/2;
		if(a[mid]==k)
		{
			return mid;
		}
		else if(a[mid]>k)
		{
			r= mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	
	return -1;
}
int in_bin(int a[],int k,int l ,int r)
{
	while(l<=r)
	{
		int mid = (l+r)/2;
		if(a[mid+1]>=k && a[mid-1]<k)
		{
			return mid;
		}
		else if(a[mid]>k)
		{
			r=mid-1;
		}
		else
		{
			l= mid+1;
		}
	}
	return -1;
	
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int k;
	cin>>k;
	int l = bin_search(a,k,0,n-1);
	int s;
	if(l==-1)
	{
		if(a[0]>k)
		{
			cout<<"0"<<endl;
		}
		else if(a[n-1]<k)
		{
			cout<<n<<endl;
		}
		else
		{
			s= in_bin(a,k,0,n-1);
			cout<<s<<endl;
		}
		
	}
	else
	{
		cout<<l<<endl;
	}
}