//brute firce by generating all the subarrays(O(n^3))
class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int ma=INT_MIN;
        int n=a.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
        	for(int j=0;j<i;j++)
        	{
        		for(int k=i;k<=j;k++)
        		{
        			s+=a[i];
        		}
        		if(s>ma)
        		{
        			ma=s;
        		}
        	}
        }
        return ma;
        
    }
}; 




//By sliding window O(n^2)
class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int ma=INT_MIN;
        int n=a.size();
        int s=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=0;j<i;j++)
            {
            	s+=a[j];
            	if(s>ma)
            		ma=s;
            }

            for(int j=i;j<n;j++)
            {
            	s-=a[j-i];
            	s+=a[j];
            	if(s>ma)
            		ma=s;
            }
            
        }
        return ma;
        
    }
}; 

//optimized kadane's algorithm
class Solution {
public:
    int maxSubArray(vector<int>& a) {
        int ma=INT_MIN;
        int n=a.size();
        int s=0;
        for(int i=0;i<n;i++)
        {
            s+=a[i];
            if(s>ma)
                ma=s;
            if(s<0)
                s=0;
            
        }
        return ma;
        
    }
}; 