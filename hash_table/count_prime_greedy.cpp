#include<bits/stdc++.h>
using namespace std;
int is_prime(int n)
{
	int f=0;
	for(int i=2;i<=sqrt(n);i++)
	{
		//cout<<i<<" "<<n%i<<" i & ni"<<endl;
		if(n%i==0)
		{
			f=1;
		}
	}
	if(f==1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int c=1;
		for (int i = 3; i <=n ; ++i)
		{
			//cout<<i<<" "<<is_prime(i)<<endl;
			c+=is_prime(i);
		}
		cout<<c<<endl;
	}
}