#include<bits/stdc++.h>
using namespace std;

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
		int mi=*min_element(a,a+n);
		int ma=*max_element(a,a+n);
		int l=mi;
		int r=ma;
		int s;
		int ans;
		while(l<=r)
		{
			int mid=(l+r)/2;
			s=0;
			for(int i=0;i<n;i++)
			{
				if(mid>a[i])
				{
					s++;
				}
			}
			if(s<k)
			{
				ans=mid;
				l=mid+1;
			}
			else
			{
				r=mid-1;
			}
		}
			cout<<ans<<endl;
	}

}