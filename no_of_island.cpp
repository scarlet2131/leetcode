int dx[]={0,1,0,-1};
int dy[]={1,0,-1,0};
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {  
        if(grid.size()==0 or grid[0].size()==0)
            return 0;
        int n=grid.size();
        int m=grid[0].size();
        bool visited[n][m];
        int island=0;
        memset(visited,false,sizeof(visited));
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1' and visited[i][j]==false)
                {
                    island++;
                    q.push({i,j});
                    visited[i][j]=true;
                    while(!q.empty())
                    {
                        pair<int,int> x=q.front();
                        q.pop();
                        for(int k=0;k<4;k++)
                        {
                            int nl=dx[k]+x.first;
                            int nr=dy[k]+x.second;
                            if(nl>=0 and nl<n and nr>=0 and nr<m and visited[nl][nr]==false and grid[nl][nr]=='1')
                            {
                                q.push({nl,nr});
                                visited[nl][nr]=true;
                            }
                        }
                    }
                    
                }
            }
        }
        return island;
    }
};