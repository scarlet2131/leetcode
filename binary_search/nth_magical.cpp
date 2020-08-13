#define ll long long int
ll g=pow(10,9)+7;
ll gcd(ll a,ll b)
{
    if(a==0)
       return b;
    return gcd(b%a,a);  
}
ll lcm(ll a,ll b)
{
    ll gig=gcd(a,b);
    cout<<"gcd : "<<gig<<endl;
    return a*b/gig;
}
ll bin_search(ll a,ll b,ll n)
{
    ll l=min(a,b);
        ll r=pow(10,18)+7;
    ll mid,ans;
    while(l<=r)
    {
        mid=(l+r)/2;
        cout<<"mid "<<mid<<endl;
        ll lc = lcm(a,b);
        ll k=(mid/a)+(mid/b)-(mid/lc);
        // if(k==n)
        // {
        //     cout<<"lcm "<<lc<<" k "<<k<<endl;
        //     ans= mid;
        //     break;
        // }
        if(k<n)
        {
            l=mid+1;
           
        }
        else
        {
            ans=mid;
            r=mid-1;
        }
        
    }
    return ans%g;
}
class Solution {
public:
    ll nthMagicalNumber(ll n, ll a, ll b) {
     
        cout<<gcd(10,100);
        ll ans=bin_search(a,b,n);
        
        return ans;
    }
};