struct comp{
    bool operator()(int a,int b)
    {
        return a>b;
    }
};

int Solution::solve(vector<int> &v) {
    
   priority_queue<int,vector<int>,comp> q;
   int n=v.size();
   int final=0,s=0;
   for(int i=0;i<n;i++)
   {
       q.push(v[i]);
   }
    // while(!q.empty())
    // {
    //     cout<<q.top()<<endl;
    //     q.pop();
    // }
   while(!q.empty())
   {
       int x=q.top();
       q.pop();
       int y;
       if(!q.empty())
       {
            y=q.top();
            q.pop(); 
       }
       else
        break;
      
       s=x+y;
       q.push(s);
       final+=s;
      
   }
   
   return final;
}
