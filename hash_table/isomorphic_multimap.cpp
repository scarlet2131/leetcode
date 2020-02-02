#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        string t;
        cin>>s>>t;
        int n=s.length();
        int m = t.length();
        int f=0;
       multimap<char,char> g;
        if(n==m)
        {
            for(int i=0;i<n;i++)
            {
                g.insert(pair<char,char>(t[i],s[i]));
            }
        }
        else
        {
            f=1;
        }
        multimap<char,char>::iterator it;
        for(it=g.begin();it!=g.end();it++)
        {
             cout<<it->first<<" "<<it->second<<endl;
            
            auto itr =it++;
            it--;
            itr++;
            cout<<"it "<<it->first<<" itr "<<itr->first<<endl;
            if(it!=g.end())
            {
                 if(it->first==itr->first)
                {
                    if(it->second != itr->second)
                    {
                        f=1;
                        break;
                    }
                }
                else if(it->second==itr->second)
                {
                    if(it->first!=itr->first)
                    {
                        f=1;
                        break;
                    }
                }
                {

                }
            }
            else
            {
                break;
            }
           
        }
        if(f==1)
        {
            cout<<"false"<<endl;
        }
        else
        {
            cout<<"true"<<endl;
        }
    }
}
