#include<bits/stdc++.h>
using namespace std;
int brute_force(int m, int n ,int k)
{
	int a[m*n];
		int c=0;
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				a[c++]=(i+1)*(j+1);
			}
		}
		sort(a,a+c);
		return a[k-1];
		
}
int optimal(int m,int n,int k)
{
	int l=1;
	int r=m*n;
	int s=0;
	int ans=0;
	while(l<=r)
	{
		int mid=(l+r)/2,s=0;
		for(int i=1;i<=n;i++)
		{
			s+=mid/i;
		}
		if(s==k)
		{
			ans=mid;
			break;
		}
		else if(s>k)
		{
			r=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,k;
		cin>>m>>n>>k;
		cout<<brute_force(m,n,k)<<endl;

		
	}
	
}