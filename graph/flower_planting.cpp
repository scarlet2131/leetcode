class Solution {

public:

vector<int> gardenNoAdj(int N, vector<vector<int>>& paths) {
    vector<int> color(N+1,0);
    vector<int> adj[N+1];
    
    for(int i=0;i<paths.size();i++)
    {
        adj[paths[i][0]].push_back(paths[i][1]);
        adj[paths[i][1]].push_back(paths[i][0]);
    }
    for(int i=1;i<=N;i++)
    {
        for(int c=1;c<=4;c++)
        {
            int f=0;                      
            for(int j=0;j<adj[i].size();j++)
            {
                 int t=adj[i][j]; 
                  if(color[t]==c)
                  {
                    f=1;
                    break;
                  }
             }
             if(f==0)
            {
                color[i]=c;
                break;
            }
        }
    }
    vector<int> ans(color.begin()+1,color.end());
    return ans;
}
};