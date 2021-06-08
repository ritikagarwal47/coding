#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll dp[K+10];//[N];
    dp[0]=0;
    for(ll i=1;i<=K;++i)dp[i]=INT_MAX;
    //for(ll i=0;i<=N;++i)dp[0][i]=INT_MAX;
    for(ll i=1;i<=K;++i)
    {
        for(ll j=0;j<N;++j)
        {
            if(A[j]<=i)dp[i]=min(dp[i],dp[i-A[j]]+1);
        }
    } 
    //for(auto i:dp)cout<<i<<' ';cout<<'\n';
    (dp[K]>=INT_MAX)?cout<<"-1":cout<<dp[K];
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/