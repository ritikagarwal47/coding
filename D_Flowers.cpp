#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll dp[100000+5]={0};
void pre(ll K)
{
    for(ll i=0;i<K;++i)dp[i]=1;
    for(ll i=K;i<=100000;++i)dp[i] = (dp[i-1] +  dp[i-K])%mod;
    for(ll i=1;i<=100000;++i)dp[i] = (dp[i] + dp[i-1])%mod ;
}
void solve()
{
    ll a,b;cin>>a>>b;
    cout<< abs(dp[b] - dp[a-1] + mod )%mod<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;cin>>T;
ll K;cin>>K;
pre(K);
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/