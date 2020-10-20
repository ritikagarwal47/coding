#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool vis[800000+5];
void dfs(vector<ll> adj[],ll v)
{
    vis[v]=1;
    for(ll i:adj[v])
    {
        if(vis[i]==0)dfs(adj,i);
    }
}
void solve()
{
    ll N,E;cin>>N>>E;
    ll x,y;
    vector<ll> adj[N+1];
    while(E--)
    {
      cin>>x>>y;
      adj[x].push_back(y);adj[y].push_back(x);
    }
    memset(vis,0,sizeof(vis));
    ll c=0;
    for(ll i=0;i<N;++i)
    {
        if(vis[i]==0)
        {
            dfs(adj,i);++c;
        }
    }
    cout<< c - 1 <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;      //  cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/