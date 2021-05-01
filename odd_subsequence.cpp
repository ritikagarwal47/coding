#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll ans=0;
ll  dp[1000+3][1000+3];
ll fun(ll num, ll pos, ll K, ll N, ll *A,ll c)
{
    if (pos == K)
    {
        //cout << num << endl;
        if(num&1)return 1;
        return 0;
    }
    if(dp[c][pos]!=-1)return dp[c][pos];
    ll as=0;
    for (ll i = c; i < N; i++)
    {
        as+=fun(num + A[i], pos + 1, K, N,A,i+1);
    }
    return dp[c][pos]=as;
}
 
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    memset(dp,-1,sizeof(dp));
    // for(ll i=0;i<=N;++i)
    //     for(ll j=0;j<=N;++j)dp[i][j]=-1;
    ans=0;
    cout<<fun(0,0,K,N,A,0)<<'\n';
    //cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/