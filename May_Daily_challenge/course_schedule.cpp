class Solution {
public:
    bool canFinish(int nc, vector<vector<int>>& p) {
        if(p.size()==0)
            return true;
        map<int,set<int>> g;
        vector<int> v(nc,0);
        int n=p.size();
        for(int i=0;i<n;i++)
        {
            g[p[i][0]].insert(p[i][1]);
            v[p[i][1]]++;
        }
        vector<int> topo;
        queue<int> q;
        for(int i=0;i<nc;i++)
        {
            if(v[i]==0)
            {
                q.push(i);
            }
        }
        while(!q.empty())
        {
                int x=q.front();
                q.pop();
                topo.push_back(x);
                auto it=g.find(x);
                if(it!=g.end())
                {
                    for(auto itr=it->second.begin();itr!=it->second.end();itr++)
                    {
                        v[*itr]-=1;
                        if(v[*itr]==0)
                        {
                            q.push(*itr);
                        }

                    }
                }
            
            
        }
        return topo.size()==nc?true:false;
        
        
    }
};