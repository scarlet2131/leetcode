
class Solution {
public:
    int snakesAndLadders(vector<vector<int>>& board) {
        int n=board.size();
        int m=board[0].size();
        // cout<<n<<" "<<m<<endl;
        vector<int> direction;
       if(n%2==0)
       {
           for(int i=0;i<n;i++)
           {
               if(i%2==0)
                    direction.push_back(-1);
               else
                   direction.push_back(1);
           }
               
       }
        else
        {
             for(int i=0;i<n;i++)
               {
                   if(i%2==0)
                        direction.push_back(1);
                   else
                       direction.push_back(-1);
               }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        map<int,pair<int,int>> g;
        int c=0;
        for(int i=n-1;i>=0;i--)
        {
            if(direction[i]==1)
            {
                for(int j=0;j<m;j++)
                {    
                    g[++c]={i,j};
                }
            }
            else
            {
                 for(int j=0;j<m;j++)
                {    
                    g[++c]={i,m-1-j};
                }
            }
        }
      
        queue< pair<int,int> > q;
        bool vis[n*n+1];
        memset(vis,false,sizeof(vis));
        q.push({1,0});
        
        int ans=0;
          int f=0;
        if(board[0][0]!=-1 or board[n-1][0]!=-1)
            f=1;
        else
        {
            while(!q.empty())
            {
               
                int z=q.size();
                for(int j=0;j<z;j++)
                {
                    pair<int,int> x=q.front();
                    q.pop();
                   
                    if(x.first==n*n) return ans;

                    for(int i=1;i<=6;i++)
                    {
                        int nl=x.first+i;
                        if(nl>n*n) break;
                        int dx=g[nl].first;
                        int dy=g[nl].second;
                        

                            if(board[dx][dy]!=-1 and board[dx][dy]<=n*n and vis[board[dx][dy]]==false )
                            {
                                 q.push({board[dx][dy],1});
                                    vis[board[dx][dy]]=true;
                                    
                                
                                
                            }       
                            else if(vis[nl]==false and board[dx][dy]==-1)
                            {
                               q.push({nl,0});
                                vis[nl]=true;

                            }
                    }



                    }
                
                ans++;
                }

            }
        
        
       if(f==1)
           return -1;
        return -1;
    }
};