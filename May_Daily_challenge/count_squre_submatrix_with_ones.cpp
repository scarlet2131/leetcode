class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        int c=0;
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]==1)
                    c++;
            }
        }
        // cout<<c<<endl;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                matrix[i][j]+=matrix[i-1][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                matrix[i][j]+=matrix[i][j-1];
            }
        }
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//             {
//                cout<<matrix[i][j]<<" "; 
//             }
//             cout<<endl;
//         }
       
//         cout<<"1"<<endl;
        for(int l=1;l<min(m,n);l++)
        {
            for(int j=1;j<m-l;j++)
            {
                int k=l;
                int r=j+l;
                int x= matrix[k][r]-matrix[k][j-1];
                if(x==(k+1)*(r-j+1))
                    c++;
                // cout<<0<<" "<<j<<" "<<k<<" "<<r<<" "<<x<<" "<<c<<endl;
            }
            
        }
        // cout<<"2"<<endl;
        for(int l=1;l<min(m,n);l++)
        {
            for(int i=1;i<n-l;i++)
            {
                int k=i+l;
                int r=l;
                int x= matrix[k][r]-matrix[i-1][r];
                if(x==(k-i+1)*(r+1))
                    c++;
                // cout<<i<<" "<<l<<" "<<k<<" "<<r<<" "<<x<<" "<<c<<endl;
            }
            
        }
        // cout<<"3"<<endl;
        for(int l=1;l<=min(n,m);l++)
            {   
                for(int i=1;i<n-l;i++)
                {
                    for(int j=1;j<m-l;j++)
                    {
                        
                        int k=i+l;
                        int r=j+l;
                             // if(k>n or k<0 or r>m or r<0)
                             //     matrix[k][r]=0;
                                 
                             
                        int x=matrix[k][r]-matrix[i-1][r]-matrix[k][j-1]+matrix[i-1][j-1];
                        if(x==(k-i+1)*(r-j+1))
                            c++;
                        // cout<<i<<" "<<j<<" "<<k<<" "<<r<<" "<<x<<" "<<c<<endl;
                    }
                }
            // cout<<c<<endl;
        }
        
        return c;
        
    }
};