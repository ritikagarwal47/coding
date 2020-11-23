#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll dis[100000+5];
vector<ll> adj[100000+5];
bool f=false;
ll s=0;
bool vis[100000+5];
bool valid(ll i)
{
    if(vis[i]==1 or dis[i]>s)return false;
    return true;
}
void dfs(ll i,ll ans,bool *vis)
{
    //cout<<i<<' ';
    vis[i] = 1;
    for(auto j : adj[i])
    {
        if(valid(j))
        {
            if(j==ans)
            {
                f=true; return;
            }
            dfs(j,ans,vis);
        }
        //else vis[j]=1;
    }
}
void solve()
{
    ll N,M,Q;cin>>N>>M>>Q;
    ll mn=LONG_MAX,mx =0;
    for(ll i=1;i<=N;++i)
    {
        cin>>dis[i];
        mx = max(mx,dis[i]);
        mn = min(mn,dis[i]);
    }
    ll u,v;
    while(M--)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    while(Q--)
    {
        
        cin>>u>>v>>s;        
        if(dis[u]>s or mx<s)
        {
            cout<<"NO\n";continue;
        }
        if(u==v or mn>s)
        {
            cout<<"YES\n";continue;
        }
        f=false;    
        memset(vis,0,N+1);     
        dfs(u,v,vis);
        if(f)cout<<"YES\n";
        else cout<<"NO\n";
    }

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/