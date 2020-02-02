#include<bits/stdc++.h>
using namespace std;
map<int,int> g;

int is_prime(int n)
{
    int f=0;
    int k;
    map<int,int>::iterator it;
    for(it=g.begin();it!=g.end();it++)
    {
        k=it->first;
        if(n%it->first==0)
        {
            f=1;
        }
    }
    //cout<<n<<"n"<<endl;
    for(int i=k;i<n;i++)
    {
      //  cout<<k<<" i "<<i<<" ni "<<n%i<<endl;
        if(n%i==0)
        {
            f=1;
        }
    }
    if(f==1)
    {
        return 0;
    }
    else
    {
        g.insert(pair<int,int>(n,1));
        return 1;
    }
}
int main()
{
        int n;
        cin>>n;
        int c=0;
       g.insert(pair<int,int>(2,1));
        for(int i=3;i<n;i++)
        {
            int x=is_prime(i);
        }
        map<int,int>::iterator itr;
        for(itr=g.begin();itr!=g.end();itr++)
        {
            c+=itr->second;
            //cout<<itr->first<<" "<<itr->second<<endl;
        }
       // cout<<c<<endl;
    
}