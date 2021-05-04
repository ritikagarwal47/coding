#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<ll> ans;
bool vis[100000+5];
void dfs(vector<pair<ll,ll>> adj[],ll u, ll c,ll val)
{
    vis[u]=true;
    bool ok = true;
    //cout<<u<<' ';
    for(auto i : adj[u])
    {
        if(!vis[i.first])
        {
            dfs(adj,i.first,c+1,val + i.second*c);
            ok=false;
        }
    }
    if(ok)
    {
        //cout<<u<<'\n';
        ans.push_back(val);
    }
}
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[M];for(ll i=0;i<M;++i)cin>>A[i];sort(A,A+M);
    vector<pair<ll,ll>> adj[N+5];
    memset(vis,false,sizeof(vis));
    for(ll i=0;i<N-1;++i)
    {
        ll a,b,c;cin>>a>>b>>c;
        adj[a].push_back({b,c});adj[b].push_back({a,c});
    }
    dfs(adj,1,1,0);
    sort(ans.begin(),ans.end());
    //for(auto i : A)cout<<i<<' ';cout<<'\n';
    //for(auto i : ans)cout<<i<<' ';cout<<'\n';
    
    ll i=0,j=0;
    ll mx=0;
    while(i<M and j<ans.size())
    {
        if(A[i]>=ans[j])
        {++mx,++i,++j;}
        else ++i;
        //cout<<mx<<' '<<i<<' '<<j<<'\n';
    }
    cout<<mx<<'\n';
    ans.clear();
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/