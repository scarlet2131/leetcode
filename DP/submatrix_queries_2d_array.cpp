
#define ll long long int
ll mod=1e9+7;
vector<int> Solution::solve(vector<vector<int> > &a, vector<int> &B, vector<int> &C, vector<int> &D, vector<int> &E) {
 
 int n=a.size();
 int m=a[0].size();
 for(int i=0;i<n;i++)
 {
     for(int j=1;j<m;j++)
     {
         a[i][j]=a[i][j-1]+a[i][j];
     }
 }
 
 for(int i=0;i<m;i++)
 {
     for(int j=1;j<n;j++)
     {
         a[j][i]+=a[j-1][i];
     }
 }
//  for(int i=0;i<n;i++)
//  {
//      for(int j=0;j<m;j++)
//         cout << a[i][j] << " ";
//     cout << endl;
//  }
 vector<int> ans;
 for(int q=0;q<B.size();q++)
 {
     int i=B[q];
     int j=C[q];
     int l=D[q];
     int r=E[q];
     i--;j--;l--;r--;
     int x=0,y=0,z=0;

    if(i-1>=0)
    {
        x=a[i-1][r];
    }
  
    if(j-1>=0)
    {
        y=a[l][j-1];
    }
  
    if(i-1>=0 and j-1>=0)
    {
        z=a[i-1][j-1];
    }
   
    ans.push_back( (a[l][r]-x-y+z)%mod);
     
 }
 return ans;
 
    
    
 
}
