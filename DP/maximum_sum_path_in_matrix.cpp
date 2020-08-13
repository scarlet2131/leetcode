int Solution::minPathSum(vector<vector<int> > &a) {
    int n=a.size();
    int m=a[0].size();
   int dp[n][m];
   dp[0][0]=a[0][0];
   for(int i=1;i<m;i++)
   {
            dp[0][i]=dp[0][i-1]+a[0][i];
   }
   for(int i=1;i<n;i++)
   {
            dp[i][0]=dp[i-1][0]+a[i][0];
   }
   for(int i=1;i<n;i++)
   {
       for(int j=1;j<m;j++)
       {
           dp[i][j]=min(dp[i-1][j],dp[i][j-1])+a[i][j];
       }
   }
//   for(int i=0;i<n;i++)
//   {
//       for(int j=0;j<m;j++)
//       {
//           cout<<dp[i][j]
//       }
//   }
//   cout<<dp[n-1][m-1];
   return dp[n-1][m-1];
}
