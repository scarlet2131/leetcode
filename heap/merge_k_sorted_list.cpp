/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct comp
{
    bool operator()(ListNode* a,ListNode* b)
    {
        return a->val>b->val;
    }
};

ListNode* Solution::mergeKLists(vector<ListNode*> &v) {
    priority_queue<ListNode*,vector<ListNode*>,comp> g;
    
    for(int i=0;i<v.size();i++)
    {
        g.push(v[i]);
    }
    ListNode* root=new ListNode(0);
    ListNode* temp=root;
    while(!g.empty())
    {
        ListNode* x=g.top();
        g.pop();
        temp->next=x;
        temp=temp->next;
        if(x->next)
            g.push(x->next);
    }
    return root->next;
    
   
}