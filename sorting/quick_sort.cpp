#include<bits/stdc++.h>
using namespace std;
vector<int> a;
int partition(int l,int r)
{
	int i=l-1;
	int n=a.size();
	int p=a[r];
	for(int j=l;j<r;j++)
	{
		if(a[j]<p)
		{
			i++;
			int k=a[i];
			a[i]=a[j];
			a[j]=k;
		}
	}
	int x=a[i+1];
	a[i+1]=a[r];
	a[r]=x;

	return i+1;
}
void quicksort(int l,int r)
{
	if(l<r)
	{
		int p=partition(l,r);

	quicksort(l,p-1);
	quicksort(p+1,r);

	}
	
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		 a.clear();

		int n;
		cin>>n;
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		int l=0;
		int r=n-1;
		cout<<"1"<<endl;
		quicksort(l,r);
		for(int i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}