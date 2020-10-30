#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool f;
bool vis[100000+5];
void dfs(vector<ll> adj[],ll v, ll j)
{
    vis[v]=1;
    for(ll i : adj[v])
    {
        if(i==j)
        {
            f=true;
            return;
        }
        if(vis[i]==0)
        {
            dfs(adj,i,j);
        }
    }
}
void solve()
{
    ll N,K;cin>>N>>K;
    ll x,y;
    vector<ll> adj[N+1];
    for(ll i=0;i<N-1;++i)
    {
        cin>>x>>y;
        adj[x].push_back(y);//adj[y].push_back(x);
    }
    ll ans=0;
    for(ll i=1;i<=N;++i)
    {
        for(ll j=1;j<=N;++j)
        {
            if(i==j)continue;
            if(abs(i-j)<=K)
            {
                memset(vis,0,N+1);
                f=false;
                dfs(adj,i,j);
                if(f)
                {
                    ++ans;
                    //cout<<i<<' '<<j<<'\n';
                }
            }
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/