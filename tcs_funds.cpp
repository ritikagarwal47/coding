#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<ll> ans;
ll c=0,mx_s=0;
bool vis[10000+5]={0};
vector<ll> adj[10000+5];
ll A[10000+5];
void dfs(ll i)
{
    vis[i] = 1;
    ++c;
    mx_s += A[i];
    ans.push_back(i);
    for(auto v : adj[i])
    {
        if(!vis[v])dfs(v);
    }
}
void solve()
{
    ll N;cin>>N;
    ll pref[N+1]={0};
    ll mx_a=0,k=0;
    for(ll i=1;i<=N;++i)
    {
        cin>>A[i];
        vis[i]=0;
        // if(mx_a<A[i])
        // {
        //     mx_a=A[i];
        //     k=i+1;
        // }
        // if(i==0)
        // {
        //     pref[i+1] = A[i];
        // }
        // else
        // {
        //     pref[i+1] = A[i] + pref[i];
        // }
    }
    //for(ll i=0;i<=N;++i)cout<<pref[i]<<' ';cout<<'\n';
    ll Q;cin>>Q;
    ll mx=0,a=0,b=0;
    for(ll i=0;i<Q;++i)
    {
        ll x,y,l,r;cin>>l>>r;
        adj[l].push_back(r);adj[r].push_back(l);
    }
    vector<ll> res;
    for(ll i=1;i<=N;++i)
    {
        if(!vis[i])
        {
            mx_s=0;
            ans.clear();
            c=0;
            dfs(i);
        if(mx<mx_s)
        {
            mx=mx_s;res=ans;
        }
        if(mx==mx_s and res.size()>ans.size())res=ans;
        }
    }
    sort(res.begin(),res.end());
    for(ll i=0;i<(ll)res.size();++i)cout<<res[i]<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/