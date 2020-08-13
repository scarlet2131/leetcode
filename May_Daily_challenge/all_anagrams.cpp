#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,p;
    cin>>s>>p;
    string sorted=p;
    sort(sorted.begin(),sorted.end());
    string temp="";
    vector<int> ans;
    for(int i=0;i<p.length();i++)
    {
        temp+=s[i];
    }
    string x=temp;
    sort(x.begin(),x.end());
    if(x==sorted)
        ans.push_back(0);

    for(int i=p.length();i<s.length();i++)
    {
        temp.erase(0,1);
        temp+=s[i];
        x=temp;
        sort(x.begin(),x.end());
        if(x==sorted)
            ans.push_back(i-p.length()+1);        
    }
    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

}