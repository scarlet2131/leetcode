
/*
Use doubly liked list and do the pushing(not appending) and store the address in a map so tht to search any key we will jst get its address from thee map and delete it from there
adjust the pointers and then push it at the beginning  .........
The order will be o(1) for all the operation.
*/

map<int,pair<int,int>> g;
int cap=0;
int c=0;
class LRUCache {
public:
    LRUCache(int capacity) {
        cap=capacity;
        c=0;
        g.clear();
    }
    
    int get(int key) {
        if(g.size()==0)
            return -1;
        auto it=g.find(key);
        if(it!=g.end())
        {
            it->second.second=++c;
            return it->second.first;
        }
            
        else
            return -1;
        
    }
    
    void put(int key, int value) {
        if(g.size()==cap)
        {
            cout<<"k v "<<key<<" "<<value<<endl;
          auto del=g.begin();
            int m=INT_MAX;
            auto it=g.find(key);
            if(it!=g.end())
                g[key]={value,++c};
            else
            {
                 for(auto it=g.begin();it!=g.end();it++)
                  {
                      if(it->second.second<m)
                      {
                          m=it->second.second;
                          del=it;
                      }
                  }
                    // cout<<"del "<<del->first<<" "<<del->second.first<<" "<<del->second.second<<endl;
                    // cout<<endl;
                g.erase(del);
                 g[key]={value,++c};
            }
         
        }
        else
        {
             g[key]={value,++c};
        }
       
        for(auto it=g.begin();it!=g.end();it++)
        {
            cout<<it->first<<" "<<it->second.first<<" "<<it->second.second<<endl;
        }
        
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */