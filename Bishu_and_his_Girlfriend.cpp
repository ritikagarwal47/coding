#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll vis[1000+5];
void dfs(vector<ll> adj[],ll v,ll c)
{
    vis[v] = c;
    for(ll i : adj[v])
    {
        if(vis[i]!=-1)dfs(adj,i,c+1);
    }
}
void solve()
{
    ll N;cin>>N;
    memset(vis,-1,sizeof(vis));
    vector<ll> adj[N+1];
    ll x,y;
    for(ll i=0;i<N-1;++i)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    dfs(adj,1,1);
    ll Q;cin>>Q;
    ll mn = LONG_MAX,ans=0;
    while(Q--)
    {
        cin>>x;
        if(vis[x]<mn)
        {
            mn=vis[x];
            ans = x;
        }
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;      //  cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/