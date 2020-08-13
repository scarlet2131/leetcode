#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    map<int,int> m;
    int x=n;
    for(int i=2;i<=sqrt(n);i++)
    {
        while(isprime(i) and x%i==0)
        {
             m[i]++;
             x/=i;
        }
           
    }
    if(x!=1 and isprime(x) and n%x==0)
        m[x]++;
    for(auto it=m.begin();it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
}