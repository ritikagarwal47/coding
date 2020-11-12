#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll par[100000+5];
ll find(ll N)
{
    if(N==par[N])return N;
    return par[N] = find(par[N]);
}
void joint(ll a,ll b)
{
    a = find(a);
    b = find(b);
    if(a!=b)par[min(a,b)] = max(a,b);
}
void solve()
{
    ll N,M;cin>>N>>M;
    for(ll i=1;i<=N;++i)par[i] = i;
    ll u,v;
    while(M--)
    {
        cin>>u>>v;
        joint(u,v);
    }
    ll Q;cin>>Q;
    while(Q--)
    {
        cin>>u>>v;
        ll x = find(u);
        ll y = find(v);
        if(x==y)cout<<"TIE\n";
        else if(x>y)cout<<u<<'\n';
        else cout<<v<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/