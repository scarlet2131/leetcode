#include<bits/stdc++.h>
using namespace std;
void quick_sort(int a[],int l,int r)
{
	int i=l;
	int j=r;
	int p=a[(l+r)/2];
	while(i<=j)
	{
		if(a[i]<p)
		{
			i++;
		}
		if(a[j]>p)
		{
			j--;
		}
		if(i<=j)
		{
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}


	if(j>l)
	  quick_sort(a, l, j);

    if (i < r)
      quick_sort(a, i, r);

}
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
		quick_sort(a,0,n-1);
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}