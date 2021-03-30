#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[1000+3][1000+3];
ll fun(ll f, ll b, ll K)
{
    if(f==0 or K==1)return dp[f][K]=1;

    if(dp[f][K]!=-1)return dp[f][K];

    return dp[f][K] = (fun(f-1,b+1,K) + fun(b,f,K-1))%mod;
}
void solve()
{
    ll N,K;cin>>N>>K;
    memset(dp,-1,sizeof(dp));
    cout<< fun(N,0,K) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/