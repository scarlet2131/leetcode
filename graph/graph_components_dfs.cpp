#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<int> > adj(1000);
bool visited[1000];
int comp;
vector<int>size;
void dfs(int n,int &count)
{
	visited[n]=true;
	count++;
	for(int i=0;i<adj[n].size();i++)
	{
		if(!visited[ adj[n][i] ])
		{
			dfs(adj[n][i],count);
		}
	}
	return;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		cin>>n>>m;
		// adj.clear();
		int x,y;
		for(int i=0;i<m;i++)
		{
			cin>>x>>y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		
		memset(visited,false,sizeof(visited));
		comp=0;
		for(int i=1;i<=n;i++)
		{
			if(!visited[i])
			{
				int count=0;
				dfs(i,count);
				comp++;
				size.push_back(count);
			}
			
		}

		cout<<comp<<endl;
		for(int i=0;i<size.size();i++)
			cout<<size[i]<<" ";
		cout<<endl;
	}
}