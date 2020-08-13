

int Solution::adjacent(vector<vector<int> > &a) {
    int n=a[0].size();
    
    int dp[n];
    for(int i=0;i<n;i++)
    {
        a[0][i]=max(a[0][i],a[1][i]);
    }
    dp[0]=a[0][0];
    dp[1]=max(a[0][0],a[0][1]);
    for(int i=2;i<n;i++)
    {
        dp[i]=max(dp[i-2]+a[0][i],dp[i-1]);
    }
    return dp[n-1];
    
}
