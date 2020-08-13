int c[256];
struct comp
{
  bool operator()(char a,char b)
  {
      return c[a]>c[b] or (c[a]==c[b] and a<b);
  }
};

class Solution {
public:
    string frequencySort(string s) {
        for(int i=0;i<256;i++)
        {
            c[i]=0;
        }
        for(int i=0;i<s.length();i++)
        {
            c[s[i]]++;
        }
        sort(s.begin(),s.end(),comp());
        return s;
        
        
    }
};