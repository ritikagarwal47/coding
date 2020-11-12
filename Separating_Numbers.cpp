#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
map<ll,ll> M[300000+5];
ll par[300000+5],color[300000+5];
ll find(ll N)
{
    if(N==par[N])return N;
    return par[N] = find(par[N]);
}
ll merge(ll a,ll b)
{
    ll res=0;
    //cout<<a<<'\n';
    a = find(a);b=find(b);
    if(M[a].size()<M[b].size())swap(a,b);
    for(auto j : M[b])
    {
        if(M[a].find(j.second)==M[a].end())M[a][j.first] = j.second;
        else 
        { 
            res += M[a][j.first]*j.second ;
            M[a][j.first] += j.second;
        }
        //cout<<res<<j.first<<j.second<<'\n';
    }
    par[b] = a;
    return res;
}
void solve()
{
    ll N;cin>>N;
    vector<pair<ll,ll>> query ;
    vector<ll> op ;
    ll u,v ;
    for(ll i=0;i<=N;++i)par[i] = i;
    for(ll i=1;i<N;++i)cin>>u>>v,query.push_back({u,v});
    for(ll i=1;i<=N;++i)cin>>u,color[i]=u,M[i][color[i]] = 1;
    for(ll i=1;i<N;++i)cin>>u,op.push_back(u);
    vector<ll> ans;
    while(!op.empty())
    {

        u = op.back();op.pop_back();
        //cout<<u<<'\n';
        //cout<<query[u-1].first<<query[u-1].second<<'\n';
        ans.push_back(merge(query[u-1].first,query[u-1].second));
    }
    for(ll i=N-2;i>=0;--i)cout<<ans[i]<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/