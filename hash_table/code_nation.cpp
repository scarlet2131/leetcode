#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int palino(string s) 
{ 
    int n = s.size(); 
    int a[n][n]; 
    for (int i = 0; i < n; i++) 
        a[i][i] = 1; 
  
    for (int cl = 2; cl <= n; cl++) 
    { 
        for (int i = 0;  
                 i < n - cl + 1; i++) 
        { 
            int j = i + cl - 1; 
            if (s[i] == s[j] && 
                        cl == 2) 
                a[i][j] = 2; 
            else if (s[i] == s[j]) 
                a[i][j] = a[i + 1][j - 1] + 2; 
            else
                a[i][j] = max(a[i][j - 1],  
                            a[i + 1][j]); 
        } 
    } 
  
   
    return a[0][n - 1]; 
} 
  

int mind(string str) 
{ 
    int n = str.size(); 
  
    int len = palino(str); 
  
 
    return  len; 
} 

int main() {
    int t;
    cin>>t;
    while(t--)
    {
       string s;
    cin>>s;
    int k= mind(s);
     if(k%2==0)
    {
         cout<<k<<endl;
    }
    else
    {
         cout<<k-1<<endl;
    }  
    }
   
   
    return 0;
}