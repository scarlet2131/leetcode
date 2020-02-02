
//works online bt ur system does not support iteraor auto thats why doesnt work right here
#include<bits/stdc++.h>
using namespace std; 

    
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        vector<int> a;
        int x;

        for(int i=0;i<n;i++)
        {
            cin>>x;
            a.push_back(x);
        }
        int target;
        cin>>target;

        map<int,int> g;
        map<int,int>::iterator it;
        vector <int > v;
       for(int i=0;i<a.size();i++)
       {
        int z= target-a[i];
        auto it = g.find(a[i]);
        if(it==g.end())
        {
             g.insert(pair<int ,int>(z,i));
        }
        else
        {
            v.push_back(it->second);
            v.push_back(i);
        }
       
       }
        
       
       for(int i=0;i<v.size();i++)
       {
        cout<<v[i]<<" ";
       }
       cout<<endl;
       
    }
}
