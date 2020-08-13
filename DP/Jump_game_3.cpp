bool dp[500001];
bool jump_dp(vector<int>& arr,int pos)
{
    if(pos<0 or pos>=arr.size())
        return false;
    if(arr[pos]==0)
        return true;
    dp[pos]=true;
  
   bool a=false,b=false;
    if(pos+arr[pos]<=arr.size() and dp[pos+arr[pos]]!=true)
    {
         a=jump_dp(arr,pos+arr[pos]);
    }
    if(pos-arr[pos]>=0 and dp[pos-arr[pos]]!=true)
    {
          b=jump_dp(arr,pos-arr[pos]);
    }
    return a or b;
    
  
        
   
}
class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        memset(dp,false,sizeof(dp));
        return jump_dp(arr,start);
        
    }
};