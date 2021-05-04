#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll N,K,P;
ll sum[50+1][30+1],dp[50+1][30*50+1];
ll fun(ll i ,ll c)
{
    if(c==0)return 0;
    if(c<0)return LONG_MIN;
    if(i>N)return 0;
    if(dp[i][c]!=-1)return dp[i][c];
    ll p = 0,s=0;
    for(ll j=0;j<=K;++j)
    {
        s+=sum[i][j];
        p = max(p,s + fun(i + 1 , c - j));
    }
    return dp[i][c] = p;
}
void solve()
{
   cin>>N>>K>>P;
   memset(dp,-1,sizeof(dp));
   for(ll i=1;i<=N;++i)
   {
       for(ll j=1;j<=K;++j)cin>>sum[i][j];
   }
   cout<< fun(1,P) <<'\n';

//    for(ll i=1;i<=N;++i)  
//    {
//        for(ll j=0;j<=P;++j)
//        {
//            //dp[i][j]=0;
//            for(ll k=0;k<=min(j,K);++k)
//            {
//                dp[i][j] = min(dp[i][j],sum[i][k] + dp[i-1][j-k]);
//                //cout<<dp[i][j]<<' ';
//            }
//            //cout<<'\n';
//        }
//    }
//    cout<<dp[N][P]<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(ll i=1;i<=T;++i)
{
    cout<<"Case #"<<i<<": ";
    solve();
    }
    exit(0);
}/*Solved By:- Ritik Agarwal*/