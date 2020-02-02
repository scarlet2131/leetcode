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
		int n=s.length();
		int f=0;
		int m=0,l=0;
		
		for(int i=0;i<n;i++)
		{
			int count[256]={0};
			f=0;
			for(int j=i;j<n;j++)
			{
				count[s[j]]++;
				//cout<<s[j];
				if(count[s[j]]>1)
				{
					f=1;
					break;
				}
				if(f==0)
				{
					l=j-i+1;
					if(l>m)
					{
						m=l;
					}
				}
				
				
				//cout<<" "<<m;
			}
			// for(int k=0;k<256;k++)
			// 	{
			// 		count[k]=0;
			// 	}
				f=0;
			//cout<<endl;

			

		}
		cout<<m<<endl;
	}
}