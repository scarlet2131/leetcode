#include<bits/stdc++.h>
using namespace std;
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
		for(int i=1;i<n;i++)
		{
			int j=i-1;
			int k=a[i];
			while(j>=0 and a[j]>k)
			{
				a[j+1]=a[j];
				j=j-1;
			}
			a[j+1]=k;
		}
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}