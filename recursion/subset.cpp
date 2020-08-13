vector<vector<int> > v;
void generate_subset(vector<int>& nums,int l,vector<int> temp)
{
    
    if(l==nums.size())
    {
        for(int i=0;i<temp.size();i++)
        {
            cout<<temp[i]<<" ";
        }
        cout<<endl;
        v.push_back(temp);
        return;
    }
    
    
    temp.push_back(nums[l]);
    generate_subset(nums,l+1,temp);
    temp.pop_back();
    generate_subset(nums,l+1,temp);
    
}
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        v.clear();
        vector<int> temp;
        generate_subset(nums,0,temp);
        
    return v;
    }
};