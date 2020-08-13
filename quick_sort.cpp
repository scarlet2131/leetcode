#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int r)
{
	int p=a[l];
	int i=l+1;
	for(int j=l+1;j<=r;j++)
	{
		if(a[j]<=p)
		{
			
			swap(a[i],a[j]);
			i++;
		}
	}
	swap(a[i-1],a[l]);
	return i-1;
}
void quick_sort(int a[],int l,int r)
{
	if(l<r)
	{
		int p=partition(a,l,r);

		quick_sort(a,l,p-1);
		quick_sort(a,p+1,r);

	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		quick_sort(a,0,n-1);
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	

}