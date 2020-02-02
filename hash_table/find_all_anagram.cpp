#include<bits/stdc++.h>
using namespace std;
vector<int> find_an(string s,string p)
{
	int l=s.length();
	int r=p.length();
	int freq_s[26]={0};
	int freq_p[26]={0};
	vector<int> g;
	for(int i=0;i<r;i++)
	{
		freq_p[p[i]-97]++;
	}
	for(int i=0;i<r;i++)
	{
		freq_s[s[i]-97]++;
	}
	int f=0;
	for(int i=r;i<=l;i++)
	{
		f=0;
		for(int j=0;j<26;j++)
		{
			if(freq_p[j]!=freq_s[j])
			{
				f=1;
				break;
			}
		}
		if(f==0)
		{
			g.push_back(i-r);
		}
		freq_s[(s[i-r]-97)]--;
		freq_s[s[i]-97]++;
	}

	

	
	return g;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s,p;
		cin>>s>>p;
		vector<int> v;
		v=find_an(s,p);
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
		cout<<endl;
	}
}