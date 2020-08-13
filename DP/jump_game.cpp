class Solution {
public:
    bool canJump(vector<int>& a) {
        int n=a.size();
        int mj=a[0];
        int k=a[0];
        if(a.size()==1)
        {
            return true;
        }
        int s=a[0];
        for(int i=1;i<n;i++)
        {
            if(i>s)
                return false;
            s=max(s,a[i]+i); 
            // cout << i << " " << s << endl;
            
            
           
        }
      
      
        return true;
        
    }
};