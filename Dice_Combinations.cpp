#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[1000000+5];
ll fun(ll N)
{
    ll ans=0;
    if(dp[N])return dp[N];
    if(N==1)return 1;
    if(N-1>0)ans+=fun(N-1);
    if(N-2>0)ans+=fun(N-2);
    if(N-3>0)ans+=fun(N-3);
    if(N-4>0)ans+=fun(N-4);
    if(N-5>0)ans+=fun(N-5);
    if(N-6>0)ans+=fun(N-6);
    if(N<=6)ans+=1;
    return dp[N]=ans%mod;
}
void solve()
{
    ll N;cin>>N;
    //if(N<=6)cout<< fun(N) + 1<<'\n';
    cout<<fun(N)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/