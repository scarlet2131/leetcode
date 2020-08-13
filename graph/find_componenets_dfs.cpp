#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000][1000];
bool visited[1000][1000];
int x[4]={-1,0,1,0};
int y[4]={0,1,0,-1};
int comp;
vector<int> size;

void dfs(int i,int j,int &count)
{
	visited[i][j]=true;
	count++;
	for(int k=0;k<4;k++)
	{
		int nl=x[k]+i;
		int nr=y[k]+j;
		if(nl>=0 and nr>=0 and nl<n and nr<m and a[nl][nr]==1 and !visited[nl][nr])
		{
			
			dfs(nl,nr,count);
		}
		
		
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		
		cin>>n>>m;
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		
		memset(visited,false,sizeof(visited));
		
		
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				
				//if got 1 true value will check all its consecutive neighbours wjho also have 
				//true value and that will make a component
				if(a[i][j]==1 and !visited[i][j])
				{
					int count=0;
					dfs(i,j,count);
					comp++;
					size.push_back(count);

				}

					
				}

			}
		
		cout<<comp<<endl;
		for(int i=0;i<size.size();i++)
			cout<<size[i]<<" ";
		cout<<endl;

	}
}