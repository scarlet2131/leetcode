#include<iostream>
using namespace std;
int main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int n,m;
         cin>>n>>m;
         int dp[n][m]={0};
         dp[0][0]=1;
         dp[1][0]=1;
         dp[0][1]=1;
         for(int i=2;i<m;i++)
         {
             dp[0][i]=1;
         }
         for(int i=2;i<n;i++)
         {
             dp[i][0]=1;
         }
         for(int i=1;i<n;i++)
         {
             for(int j=1;j<m;j++)
             {
                 dp[i][j]=(dp[i-1][j]+dp[i][j-1]);
             }
         }
        //  for(int i=0;i<n;i++)
        //  {
        //      for(int j=0;j<m;j++)
        //      {
        //          cout<<dp[i][j]<<" ";
        //      }
        //      cout<<endl;
        //  }
         cout<<dp[n-1][m-1]<<endl;
     }
   
}