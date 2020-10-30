#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,M;cin>>N>>M;
    vector<ll> adj[N+1];
    vector<ll> ans;
    ll in[N+1]={0};
    ll x,y;
    while(M--)
    {
        cin>>x>>y;
        adj[x].push_back(y);
        ++in[y];
    }
    multiset<ll> Q;
    for(ll i=1;i<=N;++i)
    {
        if(in[i]==0)Q.insert(i);
    }
    while(!Q.empty())
    {
        ll  v  = *Q.begin();
        Q.erase(*Q.begin());
        for(ll i : adj[v])
        {
            --in[i];
            if(in[i]==0)Q.insert(i);
        }
        ans.push_back(v);
    }
    if(ans.size()!=N)cout<<"Sandro fails.\n";
    else
    {
        for(ll i=0;i<ans.size();++i)cout<<ans[i]<<' ';
        cout<<'\n';
    }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/