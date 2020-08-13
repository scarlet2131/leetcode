//priority queue using stl and searching in peiority queue is o(log(n))
// and we are poping k elements so time complexity is O(klog(n))



#include<bits/stdc++.h>
using namespace std;
struct comp
{
	bool operator()(int a,int b)
	{
		return a>b;
	}
};
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int> v;
		priority_queue<int> q;
		int x;
		for(int i=0;i<n;i++)
		{
			cin>>x;
			v.push_back(x);
			q.push(x);
		}
		for(int i=0;i<k-1;i++)
		{

			
			q.pop();
		}
		cout<<q.top()<<endl;



		//another space optimized method to do this using k sized min heap and removing min elements
		// and adding the maximum element then at the end we will be left with k maximum element
		//in our heap
		priority_queue<int,vector<int>,comp> g;

		for(int i=0;i<k;i++)
		{
			g.push(v[i]);
		}
		for(int i=k;i<n;i++)
		{
			if(v[i]>g.top())
			{
				g.pop();
				g.push(v[i]);
			}
		}
		cout<<"space optimized "<<g.top()<<endl;

		
	}
}
