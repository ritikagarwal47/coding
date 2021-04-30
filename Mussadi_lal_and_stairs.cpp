#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[100000+5];
void pre()
{
    dp[1]=1;dp[2]=2;dp[3]=4;
    for(ll i=4;i<=100000;++i)
        dp[i] = (dp[i-1] + dp[i-2] + dp[i-3])%mod;

    //for(ll i=0;i<=100;++i)cout<<dp[i]<<' ';
}
void solve()
{
    ll N;cin>>N;cout<<dp[N] <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/