#include<bits/stdc++.h>
using namespace std;

    string getHint(string s, string g) {
        //vector<pair,int<pair<char,char> > > v;
        int count[100]={0};
        vector< pair<int, pair<char, char> > > v;
        for(int i=0;i<s.length();i++)
        {
            v.push_back(make_pair(i,make_pair(s[i],g[i])));
            int k=g[i]-'0';
            count[k]++;
        }
        for(int i=0;i<10;i++)

        {
            cout<<count[i]<<" ";
        }
        cout<<endl;
        
        int a=0,b=0;
       

        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(v[i].second.first==v[j].second.second)
                {
                     int k=v[i].second.first-'0';
                    if(i==j)
                    {
                        if(count[k]>0)
                        {

                            a++;
                       
                        count[k]--;
                        v[i].second.first='f';
                        // cout<<"A " <<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
                        break;
                    }
                        
                    }
                   
                }
            }
        }
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(v[i].second.first==v[j].second.second)
                {
                     int k=v[i].second.first-'0';
                    if(i!=j)
                    {
                        if(count[k]>0)
                        {

                            b++;
                       
                        count[k]--;
                         //cout<<"A " <<v[i].first<<" "<<v[i].second.first<<" "<<v[i].second.second<<endl;
                        break;
                    }
                        
                    }
                   
                }
            }
        }

       
        return to_string(a)+"A"+to_string(b)+"B";
    }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s,g;
        cin>>s>>g;
        string ans=getHint(s,g);
        cout<<ans<<endl;
    }
}