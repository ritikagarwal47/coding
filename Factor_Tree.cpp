#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll ans[100000+5];
ll Ml=0,Mr=-1;
ll c=0;
void fun(vector<pair<ll,pair<ll,ll>>> V,ll Q)
{
    for(ll i=0;i<Q;++i)
    {
        ll l = V[i].first;
        ll r = V[i].second.first;
        ll idx = V[i].second.second;
        while(Ml>l)Ml--;
        while(Ml<l)Ml++;
        while(Mr>r)Mr++;
        while(Mr<r)Mr--;
        ans[idx] = c ;
    }
}
void solve()
{
    ll N;cin>>N;
    vector<pair<ll,pair<ll,ll>>> V;
    vector<ll> adj[N+1];
    ll u,v;
    for(ll i=1;i<N;++i)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll Q;cin>>Q;
    for(ll i=0;i<Q;++i)
    {
        cin>>u>>v;
        V.push_back({u,{v,i}});
    }
    fun(V,Q);
    for(ll i=0;i<Q;++i)cout<<ans[i]<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/