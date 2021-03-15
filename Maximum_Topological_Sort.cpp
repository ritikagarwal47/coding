#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll fact[500000+5];
void factorial()
{
    //ll f=1;
    fact[1]=fact[0]=1;
    for (ll i=2;i<=500000;++i)
    {
        fact[i]=((fact[i-1]%mod)*(i%mod))%mod;
    }
}

void solve()
{
    ll N,K;cin>>N>>K;
    if(N==1)
    {
        cout<<"0 0\n";return;
    }
    ll in[N+1]={0};
    vector<ll> adj[N+1];
    for(ll i=0;i<N-1;++i)
    {
        ll x,y;cin>>x>>y;
        adj[x].push_back(y);adj[y].push_back(x);
        in[x]++;in[y]++;
    }
    ll mx=0,c=0;
    for(ll i=1;i<=N;++i)
    {
        if(mx<=in[i])
        {
            mx=in[i];
            c=i;
        }
    }
    //in[c]=0;
    map<ll,ll> M;
    for(ll i=1;i<=N;++i)
    {
        if(in[i]!=mx)M[in[i]]++;
    }
    ll ans=1;
    for(auto i : M)
    {
        //cout<<ans<<' '<<c<<'\n';
        ans  =  (( ans%mod)*( fact[i.second]%mod))%mod;
        ans%=mod;
    }
    cout<<c<<' '<<(ans + mod)%mod<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
factorial();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/