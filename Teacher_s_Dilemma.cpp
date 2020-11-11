#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll parent[100000+5];
ll find(ll n)
{
    if(parent[n]<0)return n;
    else return find(parent[n]);
}
void joint(ll a,ll b)
{
    a = find(a);
    b = find(b);
    if(a!=b)
    {
        parent[a] += parent[b];
        parent[b] = a ;
    }
}
void solve()
{
    ll N,M;cin>>N>>M;
    memset(parent,-1,sizeof(parent));
    //ll A[N+1];
    //for(ll i=0;i<=N;++i)A[i]=-1;
    while (M--)
    {
        ll u,v;cin>>u>>v;
        joint(u,v);
    }
    ll ans=1;
    for(ll i=1;i<=N;++i)
    {
        if(parent[i]<0)
        {
            ans *= abs(parent[i]);
        }
    }  
    cout<<ans<<'\n';  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/