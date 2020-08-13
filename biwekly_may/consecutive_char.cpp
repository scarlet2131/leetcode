#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int m=INT_MIN;
    int c=0;
    for(int i=0;i<a.length()-1;i++)
    {
        
        if(a[i]==a[i-1])
        {
            c++;
        }
        else
        {
            c=0;
        }
        
        if(c+1>m)
        {
            m=c+1;
        }
    }
    cout<<m<<endl;


}