#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<ll> adj[200000+2];
ll c=0;
void dfs(ll V,ll *vis)//,vector<ll> &adj)
{
    vis[V]=1;
    ++c;
    for(auto i : adj[V])
    {
        if(!vis[i])
        {
            dfs(i,vis);
            //vis[i]=1;
        }
    }
}
void solve()
{
    ll N,M;cin>>N>>M;
    //vector<ll> adj[N+1];
    while(M--)
    {
        ll x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll ans=1;
    ll vis[N+1]={0};
    for(ll i=1;i<=N;++i)
    {
        if(!vis[i])
        {
            c=0;
            dfs(i,vis);
            ans *=c;
        }
    }
    cout<< ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/