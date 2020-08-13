#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		int l=a.length();
		int r=b.length();
		int dp[l+1][r+1];
		for(int i=0;i<r+1;i++)
		{
			dp[0][i]=0;
		}
		for(int i=0;i<l+1;i++)
		{
			dp[i][0]=0;
		}
		for(int i=1;i<l+1;i++)
		{
			for(int j=1;j<r+1;j++)
			{
				if(a[i]==b[j])
				{
					dp[i][j]=dp[i-1][j-1]+1;
				}
				else
				{
					dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
				}
			}
		}
		for(int i=0;i<l+1;i++)
		{
			for(int j=0;j<r+1;j++)
			{
				cout<<dp[i][j]<<" ";
			}
			cout<<endl;
		}	
	}
}