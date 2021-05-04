#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
//ll dp[100000000];
map<ll,ll> dp;
ll fun(ll N)
{
    if(N==0)return 1;
    if(N==1)return 1;
    if(N==2)return 2;
    if(dp[N]!=0)return dp[N];
    if(N&1)return dp[N] = (fun(N/2)*fun(N/2-1)%mod + fun(N/2)*fun(N/2+1)%mod)%mod;// + 1;
    return dp[N] = (fun(N/2)*fun(N/2)%mod + fun(N/2 - 1)*fun(N/2 - 1)%mod)%mod;
}
void solve()
{
    ll N;cin>>N;
    cout<<fun(N)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/