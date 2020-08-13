#define ll long long int
ll mod=1e9+7;
ll inv;
void merge(vector<int> &v,int l,int m,int r)
{
    int s1=m-l+1;
    int s2=r-m;
    int left[s1];
    int right[s2];
    int c1=0,c2=0;
    for(int i=l;i<=m;i++)
    {
        left[c1++]=v[i];
    }
    for(int i=m+1;i<=r;i++)
    {
        right[c2++]=v[i];
    }
    int i=0,j=0;
   int temp[r-l+1];
   int x=0;
    while(i<s1 and j<s2)
    {
        if(left[i]>right[j])
        {
            temp[x++]=right[j];
            j++;
            inv+=s1-i;
            inv%=mod;
        }
         else 
        {
            temp[x++]=left[i];
            i++;
        }
        
        
    }
    while(i<s1)
    {
        temp[x++]=left[i];
        i++;
    }
    while(j<s2)
    {
        temp[x++]=right[j];
        j++;
    }
    int ct=0;
    for(int i=l;i<=r;i++)
    {
        v[i]=temp[ct++];
    }
    
}
void mergesort(vector<int> &v,int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(v,l,mid);
        mergesort(v,mid+1,r);
        
        merge(v,l,mid,r);
    }
}
int Solution::solve(vector<int> &v) {
    inv=0;
   mergesort(v,0,v.size()-1);
   
   return inv;
}
