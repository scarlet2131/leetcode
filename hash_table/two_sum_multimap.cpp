
#include<bits/stdc++.h>
using namespace std; 
// int bin_search(vector<int>& a,int l,int r,int x,int i)
// {
//     cout<<"b "<<i<<endl;
//     cout<<"x "<<x<<endl;
//     while(l<=r)
//     {
//         int mid =(l+r)/2;
//         if(a[mid]==x && mid!=i)
//         {
//             cout<<"ans "<<mid<<endl;
//             return mid;
//         }
//         else if(a[mid]>x)
//         {
//             r=mid;
//         }
//         else
//         {
//             l=mid+1;
//         }
//     }

//     return -1;
// }
    
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

         multimap<int, int> g;
        vector<int> v;
        for(int i=0;i<a.size();i++)
        {
            g.insert(pair<int, int>(a[i],i));
        }
        map<int, int>::iterator itr; 
        int k;
        for(itr = g.begin(); itr!= g.end(); itr++)
        {
            k=target-itr->first;
                if(g.count(k))
                {
                    v.push_back(itr->second);
                    itr++;
                    while(itr->first!=k )
                    {
                        itr++;

                    }

                 v.push_back(itr->second);

                } 
            
           
            
        }
       for(int i=0;i<v.size();i++)
       {
        cout<<v[i]<<" ";
       }
       cout<<endl;
       
    }
}
