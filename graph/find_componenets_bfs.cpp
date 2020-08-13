#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n>>m;
		int a[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>>a[i][j];
			}
		}
		bool visited[n][m];
		memset(visited,false,sizeof(visited));
		int x[4]={-1,0,1,0};
		int y[4]={0,1,0,-1};
		int comp=0;
		int count;
		vector<int> size;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				count=0;
				//if got 1 true value will check all its consecutive neighbours wjho also have 
				//true value and that will make a component
				if(a[i][j]==1 and !visited[i][j])
				{
					queue<pair<int,int>> q;
					q.push({i,j});
					visited[i][j]=true;
					while(!q.empty())
					{
						pair<int,int> f=q.front();
						q.pop();
						count++;
						for(int k=0;k<4;k++)
						{
							int nl=f.first+x[k];
							int nr=f.second+y[k];
							if(nl>=0 and nr>=0 and nl<n and nr<m and a[nl][nr]==1 and !visited[nl][nr])
							{
								q.push({nl,nr});
								visited[nl][nr]=true;

							}

						}
						

					}
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