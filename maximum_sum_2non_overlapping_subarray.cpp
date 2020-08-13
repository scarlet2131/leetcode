class Solution {
public:
    int maxSumTwoNoOverlap(vector<int>& a, int L, int M) {
        int n=a.size();
        int m=INT_MIN;
        int s1=0,s2=0;
        for(int i=0;i<L;i++)
        {
            s1+=a[i];
        }
        for(int i=L;i<L+M;i++)
        {
            s2+=a[i];
        }
        // cout<<s1<<" "<<s2<<endl;
        if(s1+s2>m)
        {
            m=s1+s2;
        }
        for(int i=L+M;i<n;i++)
        {
            s2-=a[i-M];
            s2+=a[i];
             // cout<<s1<<" "<<s2<<endl;
            if(s1+s2>m)
            {
                m=s1+s2;
            }
        }
        for(int i=L;i<n;i++)
        {
            s1-=a[i-L];
            s1+=a[i];
            if(i-L>=M-1)
            {
                s2=0;
                for(int j=0;j<M;j++)
                {
                    s2+=a[j];   
                }
                 // cout<<s1<<" "<<s2<<endl;
                if(s1+s2>m)
                {
                    m=s1+s2;
                }
                if(M<i-L+1)
                {
                    for(int j=M;j<i-L+1;j++)
                    {
                        s2-=a[j-M];
                        s2+=a[j];
                         // cout<<s1<<" "<<s2<<endl;
                        if(s1+s2>m)
                        {
                            m=s1+s2;
                        }
                    }
                }
                
            }
                
                if(i+1+M<n)
                {
                    s2=0;
                        for(int j=i+1;j<i+1+M;j++)
                        {
                            s2+=a[j];
                        }
                     // cout<<s1<<" "<<s2<<endl;
                        if(s1+s2>m)
                        {
                            m=s1+s2;
                        }
                        for(int j=i+1+M;j<n;j++)
                        {
                            s2-=a[j-M];
                            s2+=a[j];
                             // cout<<s1<<" "<<s2<<endl;
                            if(s1+s2>m)
                            {
                                m=s1+s2;
                            }
                        }
                }
               
            }
        
        return m;
        
    }
};