#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    map<int,int> m;
    int x=n;
    while(x%2==0)
    {
        m[2]++;
        x/=2;
    }
    for(int i=3;i<=sqrt(n);i+=2)
    {
        while(x%i==0)
        {
             m[i]++;
             x/=i;
        }
           
    }
    if(x>2)
        m[x]++;
    for(auto it=m.begin();it!=m.end();it++)
        cout<<it->first<<" "<<it->second<<endl;
}