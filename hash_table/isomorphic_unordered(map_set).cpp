//dosent run becoz of old gcc version 
//  order o(n) if n is the length of the string

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,t;
		cin>>s>>t;
		int f=0;
		unordered_map<char,char> g;
		unordered_set<char> set;
		for(int i=0;i<s.size();i++)
		{
			auto it=g.find(s[i]);
			if(it!=g.end())
			{
				if(it->second!=t[i]);
				{
					f=1;
				}
			}
			else
			{
				if(set.find(t[i])!=set.end())
				{
					f=1;
				}
				g[s[i]]=t[i];
				set.insert(t[i]);
			}
		}
		if(f==1)
		{
			cout<<"false"<<endl;
		}
		else
		{
			cout<<"true"<<endl;
		}
	}
}