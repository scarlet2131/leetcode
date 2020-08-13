#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		
		queue<int> q;
		q.push(1);
		q.push(2);
		q.push(3);
		int c = 0;
		while(!q.empty())
		{
			int t=q.front();
			q.pop();
			
			c++;
			if(c==n)
			{
				cout << t << endl;
				break;
			}
			int a1=10*t+1;
			int a2=10*t+2;
			int a3=10*t+3;
			q.push(a1);
			q.push(a2);
			q.push(a3);
			

			
		}
		// while(!q.empty())
		// {
		// 	cout<<q.front()<<" ";
		// 	q.pop();
		// }
		cout<<endl;
	}
}