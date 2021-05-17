#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
pair<ll,ll> dp[2000+3][2000+3];
ll ans=0;
pair<ll,ll> fun(ll i,ll j,ll N,ll M)
{
    if(i==N and j==M)
    {
        pair<ll,ll> p = dp[i][j];
        if(dp[0]>dp[1])ans=0;
        else if(dp[0]==dp[1])ans=-1;
        else ans=1;
    }
    if(dp[i][j][0]!=-1)
}
void solve()
{
    ll N,M;cin>>N>>M;
    memset(dp,-1,sizeof(dp));
    char A[N][M];
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)cin>>A[i][j];
    }

    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)cout<<A[i][j];cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/