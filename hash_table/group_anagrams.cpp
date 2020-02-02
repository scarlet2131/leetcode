class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& v) {
      vector<vector<string> >ans;
        map<string, vector<string> > g;
        for(int i=0;i<v.size();i++)
        {
            string a=v[i];
            sort(a.begin(),a.end());
            g[a].push_back(v[i]);
        }
        for(auto it=g.begin();it!=g.end();it++)
        {
            ans.push_back(it->second);
        }
        return ans;
        
        
    }
};