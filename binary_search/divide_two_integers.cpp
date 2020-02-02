#define ll long long int

ll  bin_search( ll a,ll b)
{
    //Two binary searches are because we are considering negative numbers also
    //1.  Searches for divisor in 0 to dividend
    //2. Searches for divisor in -dividend to -1
    // Whichever is closest to dividend is returned 
    ll l=0,r=a;
    ll ans1=0,ans2=0;
    while(l<=r)
    {
        ll mid=(l+r)/2;
        if(mid*b<=a)
        {
            ans1=mid;
            l = mid+1;     
        }
        else if(mid*b>a)
        {
            r=mid-1;
        }
      
    }
    l=-a;r=-1;
    
    while(l<=r)
    {
        ll mid=(l+r)/2;
      
        
        if(mid*b>a)
        {
            l = mid+1;    
        }
        else if(mid*b<=a)
        {
            ans2=mid;
            r=mid-1;
        }
      
    }
   
    return (a-ans1*b)>(a-ans2*b)?ans2:ans1;
}
class Solution {
public:
    ll divide(ll dividend, ll divisor) {
        
        ll a=dividend;
       ll b=divisor;
//        assumption is dividened is always positive
        if((a<0 and b>0) or  (a<0 and b<0))
        {
            a=-a;
            b=-b;
        }
       
      
       ll ans=bin_search(a,b);
       if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        return ans;
        
    }
};
