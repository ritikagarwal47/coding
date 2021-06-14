#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll power(ll x,ll y)
{
    ll res = 1;   
    x = x % mod;
    if (x == 0) return 0; 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % mod;
        y = y>>1;
        x = (x*x) % mod;
    }
    return res;
}
void dfs(ll v,vector<ll> adj[],ll *vis)
{
    vis[v]=1;
    for(auto i:adj[v])
    {
        if(vis[i]==0)dfs(i,adj,vis);
    }
}
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    vector<ll> adj[N+1];
    for(ll i=0;i<N;++i)
    {
        ll x;cin>>x;
        adj[x].push_back(A[i]);
        adj[A[i]].push_back(x);
    } 
    ll vis[N+1]={0};
    ll ans=0;
    for(ll i=1;i<=N;++i)
    {
        if(vis[i]==0)
        {
            dfs(i,adj,vis);
            ++ans;
        }
    }
    cout<< power(2,ans)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/