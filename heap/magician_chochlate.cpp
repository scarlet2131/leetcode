#define ll long long int
ll mod=1e9+7;
int Solution::nchoc(int k, vector<int> &v) {
    priority_queue<ll> g;
    for(int i=0;i<v.size();i++)
    {
        g.push(v[i]);
    }
    ll c=0;
    ll ans=0;
    while(c<k)
    {
        ll k=g.top();
        ans+=g.top();
        g.pop();
        g.push(floor(k/2));
        c++;
    }
    return ans%mod;
}
