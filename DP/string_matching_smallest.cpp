#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		bool visited[256];
		memset(visited,false,sizeof(visited));
		int n=s.length();
		int c=0;
		for(int i=0;i<n;i++)
		{
			if(visited[s[i]]==false)
			{
				visited[s[i]]=true;
				c++;
			}
		}
		int count[256]={0};
		int start=0;
		for(int i=0;i<n;i++)
		{
			
				count[s[i]]++;
				if(count[s[i]]==1)
				{
					cs++;
				}
				if(cs==c)
				{
					while(count[s[start]]>1)
					{
						if()
						count[s[start]]--;
						start++;
					}
				}
			
		}
	}
}