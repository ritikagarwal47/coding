#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll fun(ll a,ll i,ll *A,ll *vis,ll c)
{
    if(a==i)return vis[a] = c ;
    if(vis[a])return vis[a];
    return vis[a] = fun(A[a],i,A,vis,c+1);
}
void solve()
{
    ll N;cin>>N;
    ll A[N+1]; for(ll i=1;i<=N;++i)cin>>A[i];
    ll ans[N];
    ll vis[N+1]={0};
    for(ll i=1;i<=N;++i)
    {
        ll c = fun(A[i],i,A,vis,1) ;
        ans[i-1] = c ;
    }
    for(ll i=0;i<N;++i)cout<<ans[i]<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/