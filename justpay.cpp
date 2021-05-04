#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll ans=0;
void dfs(vector<ll> adj[],ll v,bool *vis,ll *dis,ll p)
{
    vis[v]=true;
    dis[v]=p;
    for(auto i: adj[v])
    {
        if(!vis[i])dfs(adj,i,vis,dis,p+1);
    }
}
void dfs1(vector<ll> adj[],ll v,bool *vis,ll p,ll n)
{
    vis[v]=true;
    if(p==n)ans=v;
    //dis[v]=p;
    for(auto i: adj[v])
    {
        if(!vis[i])dfs1(adj,i,vis,p+1,n);
    }
}
void solve()
{
    ll N;cin>>N;
    vector<ll> adj[N];
    ll x;
    for(ll i=0;i<N;++i)
    {
        cin>>x;adj[i].push_back(x);
    }
    bool vis1[N],vis2[N];
    ll dis1[N],dis2[N];
    memset(vis1,false,sizeof(vis1));
    memset(vis2,false,sizeof(vis2));
    memset(dis1,0,sizeof(dis1));
    memset(dis2,0,sizeof(dis2));
    ll c1,c2;cin>>c1>>c2;
    ans=LONG_MAX;
    dfs(adj,c1,vis1,dis1,0);
    dfs(adj,c2,vis2,dis2,0);
    // for(auto i:vis1)cout<<i<<' ';cout<<'\n';
    // for(auto i:vis2)cout<<i<<' ';cout<<'\n';
    // for(auto i:dis1)cout<<i<<' ';cout<<'\n';
    // for(auto i:dis2)cout<<i<<' ';cout<<'\n';
    ll a;
    for(ll i=0;i<N;++i)
    {
        if(vis1[i] and vis2[i])
        {
            ans=min(ans,dis1[i]+dis2[i]);
            a=dis1[i];
        }
    }
    if(ans!=LONG_MAX)
    {
        memset(vis1,false,sizeof(vis1));
        dfs1(adj,c1,vis1,0,a);
        cout<<ans<<'\n';
    }
    else cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/