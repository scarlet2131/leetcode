struct comp
{
  bool operator()(pair<int,int> x,pair<int,int> y)
  {
      return x.first>y.first ;
  }
};
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int N, int k) {
        map<int,vector<pair<int,int> > > adj;
       
        for(int i=0;i<times.size();i++)
        {
            adj[times[i][0]].push_back({times[i][1],times[i][2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,comp> temp;
        vector<bool> vis(N+2,false);
        temp.push({0,k});
        vector<int> dis(N+1,INT_MAX);
        dis[0]=0;
        dis[k]=0;
        int m=INT_MIN;
        while(!temp.empty())
        {
            
            pair<int,int> x=temp.top();
            temp.pop();
            cout<<x.first<<" "<<x.second<<endl;
            vis[x.second]=true;
            m=x.first>m?x.first:m;
            for(int i=0;i<adj[x.second].size();i++)
            {
                if(vis[adj[x.second][i].first]==false)
                    if(dis[adj[x.second][i].first]>dis[x.second]+adj[x.second][i].second)
                    {
                         dis[adj[x.second][i].first]=dis[x.second]+adj[x.second][i].second;
                        temp.push({dis[x.second]+adj[x.second][i].second,adj[x.second][i].first});
                    }
                       
                    
            }
        }
       for(int i=0;i<dis.size();i++)
       {
           cout<<dis[i]<<" ";
       }
        cout<<endl;
        m=*max_element(dis.begin(),dis.end());
        if(m==INT_MAX)
            return -1;
        return m;
    }
};