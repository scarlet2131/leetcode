int dx[4]= {0,1,0,-1};
int dy[4]= {1,0,-1,0};
bool safe(int l,int r,int n,int m)
{
    return l>=0 and l<m and r>=0 and r<n;
}
int ans;
int M;
void pick(vector<vector<int>>& g,int i,int j,set<pair<int,int>>& visited)
{
    int m=g.size();
    int n=g[0].size();
    //pick the current cell and explore all the paths
    ans+=g[i][j];
    M= max(ans,M);
    visited.insert({i,j});
     for(int k=0;k<4;k++)
     {
         int l=i+dx[k];
         int r=j+dy[k];
        
         if (safe(l,r,n,m) and visited.find({l,r})==visited.end())
         {
             
             if(g[l][r]>0)
             {
                 pick(g,l,r,visited);
             }
         }
         
        
     }
     //backtrack step
    visited.erase({i,j});
    ans -=g[i][j];
   
}


class Solution {
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        
        int m = grid.size();
        int n = grid[0].size();
       int z=INT_MIN;
        int ans=INT_MIN;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                //will have to take all valid position as start index for traversal in the grid
                if(grid[i][j]>0)
                {
                    M=0;
                    ans=0;
                    set<pair<int,int>> visited;
                    pick(grid,i,j,visited);
                    //will have to store the maximum of all the answers (starting from different index)
                    z=max(z,M);
                    
                }
            }
        }
        return z;
    }
};