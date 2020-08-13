

vector<int> Solution::solve(vector<int> &a, vector<int> &b) {
    
   priority_queue<pair<int,pair<int,int> > > g;
  
   int n=b.size();
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  
  int i=n-1;
  int j=n-1;
   map<pair<int,int>,int> m;
  g.push({a[i]+b[j],{i,j}});
  m[{i,j}]=1;
  int c=0;
    vector<int> ans;
   
  while(!g.empty() and c<n)
  {
      pair<int,pair<int,int>> x=g.top();
      g.pop();
      ans.push_back(x.first);
      int xi = x.second.first;
      int xj = x.second.second;
      if(m[{xi,xj-1}]!=1)
      {
           g.push({a[xi]+b[xj-1],{xi,xj-1}});
           m[{xi,xj-1}]=1;
      }
      if(m[{xi-1,xj}]!=1)
      {
          g.push({a[xi-1]+b[xj],{xi-1,xj}});
          m[{xi-1,xj}]=1;
      }
      c++;
  }
 
   
  
   return ans;

}