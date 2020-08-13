// ------LCS-------------DP---------------
//intution is we want to connect non contigous points which should not intersect means shouuld maintain the order so it is longest common subsequnce 
class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
      int n=A.size()+1;
    int m=B.size()+1;
        int dp[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                dp[i][j]=0;
            }
        }
       for(int i=1;i<n;i++)
       {
           for(int j=1;j<m;j++)
           {
               if(A[i-1]==B[j-1])
               {
                   dp[i][j]=max(dp[i][j],dp[i-1][j-1]+1);
               }
               else
               {
                   dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
               }
           }
       }
//         for(int i=1;i<n;i++)
//        {
//            for(int j=1;j<m;j++)
//            {
//                cout<<dp[i][j]<<" ";
              
//            }
//             cout<<endl;
//         }
        return dp[n-1][m-1];
    }
};






