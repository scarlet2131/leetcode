//Order of O(nlogn) to find the minimum subarray with sum greater than target

bool valid(vector<int> v,int len,int k)
{
    int f=0,sum=0;
    for(int i=0;i<len;i++)
    {
        sum+=v[i];
    }
    if(sum>=k)
        {
            return true;
        }
    for(int i=len;i<v.size();i++)
    {
        sum-=v[i-len];
        sum+=v[i];
        if(sum>=k)
        {
           return true;
        }
    }
   
    return false;
}
//Applying binary search on length.
int bin_search(vector<int> v,int k)
{
    int l=1;
    int r=v.size();
    int ans=0;
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(valid(v,mid,k))
        {
            //if the length is valid we will find any length less than that if that gives the required sum .
            ans=mid;
            r=mid-1;
            
        }
        else
        {
            //if a smaller subarray does not have sum>=target than we will have to search in a bigger subarray so length should increase
            l=mid+1;
        }
    }
    return ans;
}
class Solution {
public:
    int minSubArrayLen(int s, vector<int>& v) {
        if(v.size()==0)
        {
            return 0;
        }
        int ans=bin_search(v,s);
        
        return ans;
    }
};