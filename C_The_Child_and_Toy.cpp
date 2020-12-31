#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    ll wt[N+1]; for(ll i=1;i<=N;++i)cin>>wt[i];
    vector<ll> adj[N+1];
    ll u,v;
    ll ans=0;
    for(ll i=0;i<K;++i)
    {
        cin>>u>>v;
        ans += min(wt[u],wt[v]);
        //adj[u].push_back(v);adj[v].push_back(u);
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/