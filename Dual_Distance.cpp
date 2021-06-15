#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dis[1000+5][1000+5];
bool vis[1000+5];
void dfs(ll v,ll p,ll c,vector<ll> adj[])
{
    vis[v]=1;dis[p][v]=c;
    for(auto i:adj[v])
    {
        //cout<<i<<' ';
        if(!vis[i])dfs(i,p,c+1,adj);
    }
    //cout<<v<<' '<<c<<'\n';
    
    //return c;
}
void solve()
{
    ll N,Q;cin>>N>>Q;
    vector<ll> adj[N+1];
    for(ll i=0;i<N-1;++i)
    {
        ll x,y;cin>>x>>y;//cout<<x<<' '<<y<<'\n';
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(ll i=1;i<=N;++i)
    {
        for(ll j=1;j<=N;++j)vis[j]=dis[i][j]=0;
        dfs(i,i,0,adj);
    }
    // for(ll i=1;i<=N;++i)
    // {
    //     for(ll j=1;j<=N;++j)cout<<dis[i][j]<<' ';cout<<'\n';
    // }
    while(Q--)
    {
        ll ans=0;
        ll a,b;cin>>a>>b;
        for(ll i=1;i<=N;++i)
        {
            ans+= min(dis[i][a],dis[i][b]);
        }
        cout<<ans<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/