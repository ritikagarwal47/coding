#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll dp[N + 1]={0};
    ll A[N+1]; for(ll i=1;i<=N;++i)cin>>A[i],dp[i]=A[i];
    //memset(prime, true, sizeof(prime));
    for (ll i = 1;i<= N;++i)
    {
        for (ll j=2*i;j<= N; j += i)
        {
            dp[j] = ((dp[j])%mod  + A[i]%mod)%mod;
        }
        //cout<<dp[p]<<' ';
        //cout<<'\n';
    }
    ll mx=0;
    for (ll i=1;i<=N;++i)
    {
        mx=max(mx,dp[i])%mod;
        //cout<<mx<<' '<<dp[i]<<'\n';
    }
    cout<< mx%mod <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/