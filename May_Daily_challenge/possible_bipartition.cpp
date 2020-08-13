class Solution {
public:
        bool possibleBipartition(int N, vector<vector<int>>& dislikes) {
            
            map<int,vector<int>> g;
            int n=dislikes.size();
            if(n==0)
                return true;
            for(int i=0;i<n;i++)
            {
                g[dislikes[i][0]].push_back(dislikes[i][1]);
                g[dislikes[i][1]].push_back(dislikes[i][0]);
                
            }
            vector<bool> seen(N+1,false);
            for(int k=1;k<=N;k++)
            {
                    if(seen[k]==false and g[k].size()>0)
                    {
                            vector<int> vis(N+1,0);
                            queue<int> q;
                            q.push(k);
                            vis[k]=1;
                            

                            while(!q.empty())
                            {
                                int p=q.size();
                                for(int i=0;i<p;i++)
                                {
                                    int x=q.front();
                                    int f=vis[x];
                                    seen[x]=true;
                                   cout<<x<<" "<<f<<endl;
                                    q.pop();
                                    auto itr=g.find(x);
                                    for(int j=0;j<itr->second.size();j++)
                                    {
                                        if(vis[itr->second[j]]==f)
                                            return false;
                                        if(seen[itr->second[j]]==false)
                                        {
                                            q.push(itr->second[j]);
                                            seen[itr->second[j]] = true;
                                            if(vis[itr->second[j]]==0)
                                            {
                                                vis[itr->second[j]]=-f;
                                            }

                                        }  

                                    }
                                }
                            }
                    }
                   
            }
          
            return true;
      
    }
};