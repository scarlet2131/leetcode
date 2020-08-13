 vector<vector<string>> board;
vector<string> ans;
bool safe(int n,int l,int r)
{
    int f=0;
    for(int i=l-1,j=r-1;i>=0 && j>=0 ;i--,j--)
    {
        if(ans[i][j]=='Q')
            return false;
    }
    for(int i=l+1,j=r-1;i<n && j>=0;i++,j--)
    {
        if(ans[i][j]=='Q')
             return false;
    }
    for(int i=0;i<r;i++)
    {
        if(ans[l][i]=='Q')
              return false;
    }
    return true;
    
}
void n_queen(int n,int col)
{
    if(col==n)
    {
       // for(int i=0;i<n;i++)
       // {
       //     cout<<ans[i]<<endl;
       // }
       //  cout << endl;
        board.push_back(ans);
        return;
    }
      
    //at each call we are processing one column 
    for(int i=0;i<n;i++)
    {
        if(safe(n,i,col))
        {
            ans[i][col]='Q';
            n_queen(n,col+1);
            ans[i][col]='.';
        }
        
    }
}
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        board.clear();
        ans.clear();
        for(int i=0;i<n;i++)
        {
            string s="";
            for(int j=0;j<n;j++)
            {
                s+='.';
            }
            ans.push_back(s);
        }
        n_queen(n,0);
        
        return board;
    }
};




/*
...
..Q
*/