//O(m)*log(n) if m is number of rows and n is number of column
bool bin_search(vector<vector<int>>& matrix, int x)
{


    //matrix is sorted in horizontally and vertically both so first we will find the row in which to search
    int k=-1;
    for(int i=0;i<matrix.size();i++)
    {
        if(matrix[i][matrix[0].size()-1]>=x)
        {
            k=i;
            break;
        }
    }
    if(k==-1)
        return false;
    //Now after getting the row in which to search we will simply do binry searching
    int l=0;
    int r=matrix[0].size();
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(matrix[k][mid]==x)
        {
            return true;
        }
        else if(matrix[k][mid]>x)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return false;
}
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0 or matrix[0].size()==0)
        {
            return false;
        }
      bool ans= bin_search(matrix,target); 
        
        return ans;
    }
};