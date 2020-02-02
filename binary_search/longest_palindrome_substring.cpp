#include<bits/stdc++.h>
using namespace std;
//Idea: we will fix a center and then move along both the sides.
//Even and odd case will be different for palindrome checking.


//Odd length substring
string odd(int j,string s)
{ 
	//j is the center of the palindrome

	string ans="";
	int n=s.length();
	int l=j-1;
	int r=j+1;
	while(l>=0 && r<n && s[l]==s[r])
	{
		l--;
		r++;
	}
	for(int i=l+1;i<r;i++)
	{
		ans+=s[i];
	}
	return ans;
}

//Even length substring
string even(int i,string s)
{
	string ans="";
	int n=s.length();
	if(s[i]!=s[i+1])
		return ans;
	//In this case there will be two centers for even palindrome substring
	int j1=i;
	int j2=i+1;
	int l1=j1-1;
	int r2=j2+1;
	while(l1>=0 && r2<n && s[l1]==s[r2])
	{
		l1--;
		r2++;
		
	}
	
	for(int i=l1+1;i<r2;i++)
	{
		ans+=s[i];
	}
	
	return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string ans="";
		string s;
		cin>>s;
		int n=s.length();
		for(int i=0;i<n;i++)
		{

			string o=odd(i,s);
			string e="";
			if(i<n-1)
				e = even(i,s);
			//Will be updated if current length is greater than previous string length 
			if(o.length()>e.length() && o.length()>ans.length())
			{
				ans=o;
			}
			else if(e.length()>o.length() && e.length()>ans.length())
			{
				ans=e;
			}
			 
		}
		
		cout<<ans<<endl;

	}
}