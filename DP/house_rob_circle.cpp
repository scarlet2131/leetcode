class Solution {
public:
    int rob(vector<int>& v) {
        int n=v.size();
        if(n==0)
            return 0;
        if(n==1)
            return v[0];
        int dp[n+1][2];
        
        //dp i[0] denotes taking 0th index
        dp[0][0]=v[0];
        dp[1][0]=max(v[0],v[1]);
        for(int i=2;i<n-1;i++)
        {
            dp[i][0]=max(dp[i-1][0],v[i]+dp[i-2][0]);
        }
        dp[n-1][0]=dp[n-2][0];
        //dp i[1] denotes not taking 0 and taking n-1;
        dp[0][1]=0;
        dp[1][1]=v[1];
        for(int i=2;i<n;i++)
        {
            dp[i][1]=max(dp[i-1][1],v[i]+dp[i-2][1]);
        }
        return max(dp[n-1][0],dp[n-1][1]);
    }
};