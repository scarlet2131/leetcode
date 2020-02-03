//Binary exponentiation of float
#define  ll long long int 
class Solution {
public:
    double myPow(double x, ll n) {
        double  result =1 ;
    double  a= x;
        int f=0;
        if(n<0)
        {
            f=1;
        }
        n=abs(n);
    while(n>0)
    {
        if(n%2==1)
        {
            result = (result*a);
        }
        n= n/2;
        a = (a*a);
        
    }
    cout<<result;
    
    if(f==1)
    {
        result= 1/result; 
    }
    else
    {
        result = result ;
    }
    return result; 
    }
};