#include<bits/stdc++.h>
using namespace std;
int n;

void merge(int a[],int l,int m,int r)
{
	int s1=m-l+1;
	int s2=r-m;
	int left[s1];
	int right[s2];
	int c1=0,c2=0;
	for(int i=l;i<=m;i++)
	{
		left[c1++]=a[i];
	}
	for(int i=m+1;i<=r;i++)
	{
		right[c2++]=a[i];
	}
	int l1=0;
	int l2=0;
	int x=0;
	int final[n];
	while(l1<s1 and l2<s2)
	{
		if(left[l1]>right[l2])
		{
			final[x++]=right[l2];
			l2++;
		}
		else
		{
			final[x++]=left[l1];
			l1++;	
		}
	}
	for(int i=l1;i<c1;i++)
	{
		final[x++]=left[i];
	}
	for(int i=l2;i<c2;i++)
	{
		final[x++]=right[i];
	}
	int cf=0;
	for(int i=l;i<=r;i++)
	{
		a[i]=final[cf++];
	}
}
 void mergesort(int a[],int l,int r)
{
	if(l<r)
	{
		int mid=(l+r)/2;

		mergesort(a,l,mid);
		mergesort(a,mid+1,r);

		merge(a,l,mid,r);
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		mergesort(a,0,n-1);
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}