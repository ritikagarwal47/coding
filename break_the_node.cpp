#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool vis[100000+5];
ll A[100000+5];
ll dfs(ll v,ll i,vector<ll> adj[])
{
    vis[v]=true;
    ll c=0;
    for(auto j:adj[v])
    {
        if(vis[j]==0 and j!=i)c+=dfs(j,i,adj);
    }
    c+=A[v];
    return c;
}
void solve()
{
    ll N,M;cin>>N>>M;//cout<<N<<' '<<M<<'\n';
    for(ll i=1;i<=N;++i)A[i]=w[i-1];
    //for(ll i=1;i<=N;++i)cout<<A[i]<<' ';cout<<'\n';
    vector<ll> adj[N+1];
    for(ll i=0;i<M;++i)
    {
        ll x,y;//cin>>x>>y;
        x = edges[i][0];
        y = edges[i][1];
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    ll ans1=0,ans2=0;
    for(ll i=1;i<=N;++i)
    {
        for(ll j=0;j<=N;++j)vis[j]=0;
        vector<ll> V;//cout<<"aa\n";
        for(ll j=1;j<=N;++j)
        {
            if(i==j)continue;
            if(vis[j]==0)V.push_back(dfs(j,i,adj));
        }
        sort(V.begin(),V.end());
        //for(auto i:V)cout<<i<<' ';cout<<'\n';
        if(V.size()==2)
        {            
            if((ans1+ans2)<=(V[0]+V[1]))
            {
                ans1=V[0];
                ans2=V[1];
            }
        }
    }
    vector<ll> ans;
    ans.push_back(ans1);
    ans.push_back(ans2);
    return;
    //cout<<ans1<<' '<<ans2<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/