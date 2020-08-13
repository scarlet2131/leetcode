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
		int l=0;
		while(l<=n)
		{
			int f=0;
			for(int i=0;i<n-1;i++)
			{
				if(a[i+1]<a[i])
				{
					f=1;
				}
			}
			if(f==1)
			{
				for(int i=0;i<n-1;i++)
				{
					int k=a[i];
					if(a[i]>a[i+1])
					{
						a[i]=a[i+1];
						a[i+1]=k;
					}
				}
			}
			else
			{
				break;
			}
		}
		l++;
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}