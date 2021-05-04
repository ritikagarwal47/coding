#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll N=0,K=0;
ll dp[2000+3][2000+3];
ll fun(ll pre,ll i)
{
    if(i==K-1)return 1;
    if(dp[pre][i]!=-1)return dp[pre][i];
    ll ans=0;
    for(ll j=pre;j<=N;j+=pre)
    {
        ans+= fun(j,i+1);
        ans%=mod;
    }
    return dp[pre][i]=ans;
}
void solve()
{
    cin>>N>>K;
    for(ll i=0;i<=N;++i)
    {
        for(ll j=0;j<=K;++j)dp[i][j]=-1;
    }
    ll ans=0;
    for(ll i=1;i<=N;++i)
    {
        ans+= fun(i,0);
        ans%=mod;
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/