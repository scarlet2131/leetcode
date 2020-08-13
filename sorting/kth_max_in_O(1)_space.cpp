/*
	find the kth largest element without sorting the array or without using the extra space
*/
//first method is brute force o(n^2)
//second is using binary search with time complexity o(nlogn)


#include<bits/stdc++.h>
using namespace std;
int brute_force(int a[],int n,int k)
{
	int c=0;
	int ans;
	for(int i=0;i<n;i++)
	{
		c=0;
		for(int j=0;j<n;j++)
		{
			if(a[i]>a[j])
			{
				c++;
			}
		}
		if(c==k-1)
		{
			ans=a[i];
			break;
		}
	}
	return ans;
}
int count(int a[],int n,int mid,int k)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(mid>a[i])
		{
			c++;
		}
	}
	
		return c;
	
}
int binary_search(int a[],int n,int l,int r,int k)
{

	while(l<=r)
	{
		int mid=(l+r)/2;
		if(count(a,n,mid,k)==k-1)
		{
			return mid;
		}
		else if(count(a,n,mid,k)>k)
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<brute_force(a,n,k)<<endl;
		int max=INT_MIN;
		int min=INT_MAX;
		for(int i=0;i<n;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
			}
			if(a[i]<min)
			{
				min=a[i];
			}
		}
		cout<<binary_search(a,n,min,max,k)<<endl;
	}
}