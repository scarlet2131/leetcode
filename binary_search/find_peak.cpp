//to find the peak in the array means any maxima if plotted in graph
//A point where the element below is smaller as well as the one ahead of it

int bin_search(vector<int> a)
{
    int l=0;
    int r=a.size()-1;
    int ans;
    while(l<=r)
    {
        int mid=(l+r)/2;
       
        int f=0;
        if((mid-1)>=0)
        {
            f=1;
        }
        if(f==1 and a[mid]>a[mid-1] && a[mid]>a[mid+1] ) 
        {
         
            ans=mid;
            break;
        }
        else if(a[mid]<a[mid+1])
        {
           
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
       
    }
    return ans;
    
}
class Solution {
public:
    int findPeakElement(vector<int>& v) {
        //IF the first element is greater than the second then it is one peak;

        if(v.size()<=1 or v[0]>v[1])
        {
            return 0;
        }
        //if the last element is greater than second last then it is also one peak;
        if(v[v.size()-1]>v[v.size()-2])
        {
            return v.size()-1;
        }
        
       int p = bin_search(v);
      
        
        return p;
    }
};