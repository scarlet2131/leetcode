struct comp
{  bool operator()(pair<int,int> a,pair<int,int> b)
    {
        return (a.first+a.second)>(b.first+b.second) or ( a.first==b.first and  a.second>b.second);
    }
};

int Solution::solve(vector<int> &a, int k) {
priority_queue<pair<int,int>,vector<pair<int,int>>,comp> z;
     for(int i=0;i<a.size();i++)
     {
         z.push({a[i],a[i]});
     }
    // while(!z.empty())
    // {
    //     pair<int,int> p = z.top();
    //     z.pop();
    //     cout << p.first <<  " " << p.second << endl;
    // }
     int c=0;
     while(c<k)
     {
         int s;
         pair<int,int> x=z.top();
         s=x.first+x.second;
        //  cout << s << " " << x.second << endl;
         z.pop();
         z.push({s,x.second});
         c++;
         
     }
     int m=INT_MIN;
     while(!z.empty())
     {
         pair<int,int> x=z.top();
         if(x.first>m)
         { 
             m=x.first;
        //   cout<<m<<" "<<x.first<<endl;
         }
         z.pop();
     }
     return m;
    
 
}
