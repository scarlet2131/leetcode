
class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> v;
       map<char,int> g;
        for(int i=0;i<S.length();i++)
        {
            g[S[i]]++;
        }
        // for(auto it=g.begin();it!=g.end();it++)
        // {
        //     cout<<it->first<<" "<<it->second<<endl;
        // }
        int c=0;
        map<char,int> temp;
       
        for(int i=0;i<S.length();i++)
        {
            
            auto it=temp.find(S[i]);
            if(it==temp.end())
            {
                temp[S[i]]=1;
                if(g[S[i]]>1)
                    g[S[i]]--;
                else if(g[S[i]]==1)
                {
                     g[S[i]]--;
                     temp.erase(S[i]);
                }
                // cout<<S[i]<<" "<<endl;
                   
                c++;
            }
            else
            {
                c++;
                 if(g[S[i]]>1)
                    g[S[i]]--;
                else if(g[S[i]]==1)
                {
                    g[S[i]]--;
                    temp.erase(S[i]);
                }
                    
                
            }
            // cout<<c<<" "<<temp.size()<<" "<<i<<endl;
            if(temp.size()==0)
            {
                v.push_back(c);
                c=0;
            }
            
        }
        return v;
    }
};