#include<bits/stdc++.h>
using namespace std;
int valid(int count[])
{
	int f=0;
	for(int i=0;i<256;i++)
	{
		if(count[i]>1)
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		return 0;
	}
	return 1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int n=s.length();
		int l=1;
		int r=n;
		int m=0,ans;
		while(l<=r)
		{
			int mid =(l+r)/2;
			

			int flag=0;
			int count[256]={0};
			for(int i=0;i<mid;i++)
			{
				count[s[i]]++;
			}
			if(valid(count)==1)
			{
				flag=1;
			}
			if(flag==0)
			{
				for(int i=mid;i<n;i++)
				{
					count[s[mid]]++;
					count[s[i-mid]]--;
					if(valid(count)==1)
					{
						flag=1;
						break;
					}
				}
			}
			if(flag==1)
			{
				ans = mid;
				l = mid+1;
			}
			else
				r = mid-1;
			

		}
		cout << ans << endl;
	}
}
