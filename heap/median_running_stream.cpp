struct comp
{
    bool operator()(int a,int b)
    {
        return a>b;      
    }
};
vector<int> Solution::solve(vector<int> &a)
{
    priority_queue<int,vector<int>,comp> r;
    priority_queue<int> l;
    vector<int> v;
    int c=1;
    int n=a.size();
    l.push(a[0]);
    int mid=a[0];
    v.push_back(a[0]);
    while(c<n)
    {
        if(l.size()>r.size())
        {
            if(a[c]<mid)
            {
                int k=l.top();
                l.pop();
                r.push(k);
                l.push(a[c]);
            }
            else
            {
                r.push(a[c]);
            }
           
        }
        else if(r.size()>l.size())
        {
            if(a[c]>mid)
            {
               int k=r.top();
               r.pop();
               l.push(k);
               r.push(a[c]);
               
            }
            else
            {
                l.push(a[c]);
            }
        }
        else if(l.size()==r.size())
        {
            if(a[c]>mid)
            {
                r.push(a[c]);
            }
            else
            {
                l.push(a[c]);
            }
        }
          c++;
        if(r.size()>l.size())
        {
            v.push_back(r.top());
            mid = r.top();
        }
        else
        {
            v.push_back(l.top());
            mid = l.top();
        }
     
    }
    
    
   
    
    return v;
   
}
