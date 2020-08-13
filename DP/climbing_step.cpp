//space O(n) time O(n)

class Solution {
public:
    int climbStairs(int n) {
        int dp[n+1];
        if(n==1)
            return 1;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
        
    }
};

//space O(1);

class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=2;
        if(n==1 or n==2)
            return n;
        int next; 
        for(int i=3;i<=n;i++)
        {
            next=a+b;
            a=b;
            b=next;
        }
        return next;
        
    }
};

//recursion

class Solution {
public:
    int climbStairs(int n) {
       
        if(n==1 or n==2)
            return n;
      return climbStairs(n-1)+ climbStairs(n-2);
        
        
    }
};







//memoisation

class Solution {
public:
    int climbStairs(int n) {
        int dp[n+1]={0};
        if(n==1 or n==2)
            return n;
        if(dp[n])
            return dp[n];
       
            int x= climbStairs(n-1)+climbStairs(n-2);
            dp[n]=x;
            return dp[n];
        
        
    }
};