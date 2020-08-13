struct comp
{
  bool operator()(pair<vector<string>,int> a,pair<vector<string>,int> b)
  {
      vector<string> x=a.first;
      vector<string> y=b.first;
      string g="",k="";
      for(int i=1;i<x.size();i++)
      {
          g+=x[i]+" ";
      }
      for(int i=1;i<y.size();i++)
      {
          k+=y[i]+" ";
      }
    
     
      
      return g<k or (g==k and x[0]<y[0]);
  }
};
class Solution {
public:
    vector<string> reorderLogFiles(vector<string>& logs) {
        int n=logs.size();
        vector<pair<string,int>> dig;
        vector<pair<vector<string>,int>> chr;
        for(int i=0;i<n;i++)
        {
        
            istringstream ss(logs[i]);
            vector<string> cp;
            while(ss){
                string word; 
                ss >> word; 
                cp.push_back(word);
                
            } 
            
            if(cp[1][0]>=48 and cp[1][0]<=58)
            {
              
                dig.push_back({cp[1],i});
            }
            else
            {
                chr.push_back({cp,i});
            }
        }
        vector<string> ans;
        sort(chr.begin(),chr.end(),comp());
        for(int i=0;i<chr.size();i++)
        {
            ans.push_back(logs[chr[i].second]);
        }
        for(int i=0;i<dig.size();i++)
        {
            ans.push_back(logs[dig[i].second]);
        }
        
      return ans;
        
    }
};