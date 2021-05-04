#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[21]={0};
void pre()
{
    dp[0]=dp[1]=1;
    for(ll i=1;i<=20;++i)
    {
        dp[i] = dp[i-1]*i;
    }
}
void solve()
{
    ll X;cin>>X;
    cout<<dp[X]<<'\n';  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/