#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll ans=0;
    ll wt[N+1]; for(ll i=1;i<=N;++i)cin>>wt[i],ans+=wt[i];
    vector<ll> adj[N+1];
    ll u,v;
    for(ll i=0;i<N-1;++i)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<ll> V;
    //vector<
    //V.push_back(0);
    for(ll i=1;i<=N;++i)
    {
        ll d = adj[i].size();
        for(ll j=1;j<d;++j)
        {
            //wt[i];
            V.push_back(wt[i]);
        }
    }
    cout<< ans <<' ';
    sort(V.begin(),V.end(),greater<ll>());
   // ll p = V.size();
    for(ll i=0;i<V.size();++i)
    {
        ans+=V[i];
        cout<< ans <<' ';
    }
    cout<<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/