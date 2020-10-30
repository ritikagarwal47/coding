#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll c;
bool vis[100000+5];
void dfs(vector<ll> adj[],ll v)
{
    vis[v]=1;
    for(ll i : adj[v])
    {
        if(vis[i]==0)
        {
            ++c;dfs(adj,i);
        }
    }
}
void solve()
{
    ll N,M;cin>>N>>M;
    ll ans = N*(N-1)/2;
    ll x,y;
    vector<ll> adj[N];
    while (M--)
    {
        cin>>x>>y;
        adj[x].push_back(y); adj[y].push_back(x);
    }
    ll p=0;
    for(ll i=0;i<N;++i)
    {
        c=1;
        if(vis[i]==0)
        {
            dfs(adj,i);
            ans -= c*(c-1)/2;
        }
    }    
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/