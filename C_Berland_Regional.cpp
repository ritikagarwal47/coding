#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;ll mx=0;
    set<ll> st;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i],st.insert(A[i]),mx=max(mx,A[i]);
    ll B[N];for(ll i=0;i<N;++i)cin>>B[i];
    vector<ll> adj[mx+1];
    for(ll i=0;i<N;++i)
    {
        adj[A[i]].push_back(B[i]);
    } 
    for(auto i:st)
    {
        sort(adj[i].begin(),adj[i].end(),greater<ll>());
    }
    for(auto i:st)
    {
        for(ll j=0;j<adj[i].size();++j)
        {
            if(j==0)continue;
            adj[i][j] += adj[i][j-1];
        }
    }
    ll ans[N+1]={0};
    for(auto j:st)
    {
        ll p = adj[j].size();
        for(ll i=1;i<=p;++i)
        {
            ll r = p%i;
            ans[i] += adj[j][p-r-1];
        }
    }
    for(ll i=1;i<=N;++i)cout<<ans[i]<<' ';cout<<'\n';
    // for(auto i:st)
    // {
    //     for(auto j:adj[i])cout<<j<<' ';cout<<'\n';
    // }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/