#include<bits/stdc++.h>
using namespace std;
string m="Z";
void make_largest(vector<pair<int,int>> b,int k,int l,string num,int sum)
{
    if(l>b.size() or sum>k)
        return;
    if(l==b.size())
    {
        if(sum==k)
        {
            m=m>num?m:num;
        }
          return;
    }
    make_largest(b,k,l,num+to_str(b[l].second),sum+b[l].first);
    make_largest(b,k,l+1,num,sum);
      
    
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> v;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    map<int,int> g;
    for(int i=0;i<n;i++)
    {
        g[v[i]]=i+1;
    }
    vector<pair<int,int>> b;
    for(auto it=g.begin();it!=g.end();it++)
    {
        b.push_back({it->first,it->second});
    }
    string s="";
    make_largest(b,k,0,s,0);
    cout<<m<<endl;

}