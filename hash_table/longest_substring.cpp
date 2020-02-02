#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string a="";
        int m = 0;
        int n=s.length();
       int f=0;
        for(int i=0;i<n;i++)
        {
           
            for(int j=i;j<n;j++)
            {
                 int count[26]={0};
                for(int k=i;k<=j;k++)
                {
                   
                    a+=s[k];
                    count[(s[k]-'a')%97]++;
                    if(count[(s[k]-'a')%97]>1)
                    {
                        f=1;
                    }
                }
                cout<<a<<endl;
               cout<<f<<endl;
                

                if(f==0)
                {
                    // cout<<a.length()<<endl;
                    if(a.length()>m)
                    {
                        m=a.length();

                    }
                }
                

                 a="";
                 f=0;

            }
        }
        cout<<m<<endl;
    }
}