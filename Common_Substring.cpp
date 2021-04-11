#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string a,b;cin>>a>>b;
    ll N = a.size();
    ll dp[N+1][N+1];//={0};
    memset(dp,0,sizeof(dp));
    for(ll i=1;i<=N;++i)   
    {
        for(ll j=1;j<=N;++j)
        {
            if(a[i-1]==b[j-1])dp[i][j]=dp[i-1][j-1] + 1;
            else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }    
    cout<<dp[N][N]<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/