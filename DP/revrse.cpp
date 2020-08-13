#include<bits/stdc++.h>
using namespace std;
bool isalpha(char x)
{
	return ((x>='A' and x<='z') || (x>='a' and x<='z'));
}
int main()
{
	string s;
	cin>>s;
	int n=s.length();
	int l=0;
	int r=n-1;
	while(l<r)
	{
		if(!isalpha(s[l]))
			l++;
		else if(!isalpha(s[r]))
			r--;
		else
		{
			swap(s[l],s[r]);
			l++;
			r--;
		}
	}
	cout<<s<<endl;
}