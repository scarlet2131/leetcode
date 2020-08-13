class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n=wordDict.size();
        int m=s.length();
        vector<bool> dp(m+1,false);
        unordered_map<string,int> g;
        for(int i=0;i<n;i++)
        {
            g[wordDict[i]]+=1;
        }
        dp[m]=true;
        for(int i=m-1;i>=0;i--)
        {
            string window="";
            for(int j=i;j<m;j++)
            {
                window.push_back(s[j]);
                if(g[window]>=1)
                {
                    if(dp[j+1]==true)
                    {
                        dp[i]=true;
                    }
                }
            }
        }
        // for(int i=0;i<m+1;i++)
        // {
        //     cout<<dp[i]<<" ";
        // }
        // cout<<endl;
        return dp[0];
    }
};
