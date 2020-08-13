#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int x;
		vector<int> a;
		priority_queue <int> q;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
			q.push(x);
		}
		for(int i=0;i<n-k;i++)
		{
			q.pop();
		}
		cout<<q.top()<<endl;

		//another method to do it using max heap of size k and heapifying it to get the kth
		//smallest number 

		priority_queue<int> g;
		for(int i=0;i<k;i++)
		{
			g.push(a[i]);
		}
		for(int i=k;i<n;i++)
		{
			if(a[i]<g.top())
			{
				g.pop();
				g.push(a[i]);
			}
		}
		cout<<"optimised space "<<g.top()<<endl;
	}
}