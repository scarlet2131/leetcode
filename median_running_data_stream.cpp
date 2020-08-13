
            
struct comp
{
    bool operator()(int a,int b)
    {
        return a>b;
    }
};
double med;
priority_queue<int> gmax;
priority_queue<int,vector<int>,comp> gmin;
class MedianFinder {
public:
    /** initialize your data structure here. */
    MedianFinder() {
        while(!gmax.empty())
        {
            gmax.pop();
        }
        while(!gmin.empty())
        {
            gmin.pop();
        }
       med=0.00;
    }
    
    void addNum(int num) {
        if(gmax.size()==0 and gmin.size()==0)
        {
            med=(double)num;
            
            gmax.push(num);
        }
        else
        {
            if(gmax.size()>gmin.size())
            {
                if(num>med)
                {
                     
                    gmin.push(num);
                    
                }
                else
                {
                    int x=gmax.top();
                    gmax.pop();
                    gmin.push(x);
                    gmax.push(num);
                    
                }
                med=(double(gmax.top()+gmin.top())/2);
                
            }
            else if(gmin.size()>gmax.size())
            {
                if(num>med)
                {
                   int x=gmin.top();
                    gmin.pop();
                    gmax.push(x);
                    gmin.push(num); 
                }
                else
                {
                    gmax.push(num);
                }
                 med=(double(gmax.top()+gmin.top())/2);
            }
            else
            {
                if(num>med)
                {
                    gmin.push(num);
                    med=(double)gmin.top();
                    
                }
                else
                {
                    gmax.push(num);
                    med=(double)gmax.top();
                }
            }

        }
            
        
        
    }
    
    double findMedian() {
      
        return med;
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */