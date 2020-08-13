class Solution {
public:
    int jump(vector<int>& a) {
        int n=a.size();
        int dp[n];
        dp[0]=0;
       
     for(int i=1;i<n;i++)
     {
         dp[i]=INT_MAX;
         for(int j=0;j<i;j++)
         {
             if(a[j]+j>=i)
             {
                 dp[i]=min(dp[i],dp[j]+1);
             }
         }
     }
        for(int i=0;i<n;i++)
        {
            cout<<dp[i]<<" ";
        }
        cout<<endl;
    return dp[n-1];
        
    }
};