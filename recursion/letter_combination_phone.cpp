map<char,string> mapping;
vector<string> ans;
void letter_com(string digits,string d,int level)
{
    if(level==digits.length())
    {
        ans.push_back(d);
        return;
    }
   auto it =mapping.find(digits[level]);
    for(int i=0;i<it->second.length();i++)
    {
        letter_com(digits,d+it->second[i],level+1);
    }
}
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        ans.clear();
        if(digits.length()==0)
        {
            return ans;
        }
        mapping['2']="abc";
        mapping['3']="def";
        mapping['4']="ghi";
        mapping['5']="jkl";
        mapping['6']="mno";
        mapping['7']="pqrs";
        mapping['8']="tuv";
        mapping['9']="wxyz";
        string d="";
        letter_com(digits,d,0);
        
        
        
        return ans;
        
        
    }
};