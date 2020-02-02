#include<bits/stdc++.h>
using namespace std;

    vector<vector<int>> threeSum(vector<int>& v) {
        
        vector<vector<int> > ans;
        sort(v.begin(),v.end());
         for(int i=0;i<v.size();i++)
         {
             int k=-v[i];
             int start=i+1;
             int end = v.size()-1;
             int sum=0;
             vector<int> temp;
             while(start<end)
             {
                 sum=v[start]+v[end];
                 if(sum>k)
                 {
                     end--;
                 }
                 else if(sum<k)
                 {
                     start++;
                 }
                 else
                 {
                     temp.push_back(-k);
                     temp.push_back(v[start]);
                     temp.push_back(v[end]);
                     break;
                 }
             }
             if(temp.size()>0)
             {
             	  ans.push_back(temp);
             }
           
         }
        return ans;
    }
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		 vector<vector<int> > ans;
		int n;
		cin>>n;
		vector<int> a(n);

		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		ans=threeSum(a);
		for(int i=0;i<ans.size();i++)
		{
			for(int j=0;j<ans[i].size();j++)
			{
				cout<<ans[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}