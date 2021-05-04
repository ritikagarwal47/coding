#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[102][2];
ll N,K,D;
ll fun(ll s,bool ok)
{
    //if(s<0)return 0;
    if(s==0 and ok)return 1;
    if(s==0)return 0;
    if(dp[s][ok]!=-1)return dp[s][ok];
    ll ans=0;
    for(ll j=1;j<=min(K,s);++j)
    {
        bool f=false;
        if(j>=D)f=true;
        ans += fun(s-j,f|ok);ans%=mod;
    } 
    return dp[s][ok] = ans%mod;
}
void solve()
{
    cin>>N>>K>>D;
    memset(dp,-1,sizeof(dp));
    ll ans=0;bool ok=false;
    cout<<fun(N,false)%mod<<'\n';
    // for(ll i=1;i<=min(K,N);++i)
    // {
    //     if(i>=D)ok=true;
    //     ans += 
    //     fun(N-i,ok);ans%=mod;
    //     cout<<ans%mod<<'\n';
    // } 
    // cout<<ans%mod<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/