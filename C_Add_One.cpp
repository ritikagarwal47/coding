#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[205000];
void pre()
{
    for(ll i=0;i<10;++i)dp[i]=1;
    for(ll i=10;i<=205000;++i)
    {
        dp[i] = dp[i-9] + dp[i-10];dp[i]%=mod;
    }
}
void solve()
{
    ll N,M;cin>>N>>M;
    ll ans=0;
	while(N)
    {
		ans =(ans + dp[N%10 + M])%mod;N/=10;
	}
    cout<<ans<<'\n'  ;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/