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
		int max=INT_MIN;
		for(int i=0;i<n;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
			}
		}
		int c=0;
		while(max>0)
		{
			max=max/10;
			c++;
		}
		int count=0;
		int b[n];
		for(int i=0;i<n;i++)
		{
			b[count++]=a[i];
		}
		int l=0;
		while(l<c)
		{
			map<int,vector<int> > v;
			for(int i=0;i<n;i++)
			{
				int d=pow(10,l);
				int k=b[i]/d;
				k=k%10;
				v[k].push_back(b[i]);
			}
			count=0;
			for(auto it=v.begin();it!=v.end();it++)
			{
				cout << it->first << ": ";
				for(int i=0;i<it->second.size();i++)
				{
					b[count++]=it->second[i];
					cout << it->second[i] << " ";
				}
				cout << endl;
			}
			cout << "*************************\n";
			l++;
		}
		for(int i=0;i<n;i++)
		{
			cout<<b[i]<<" ";
		}
		cout<<endl;
	}
}