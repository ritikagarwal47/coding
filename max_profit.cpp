#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string s,q;cin>>s>>q;
    ll dp[N+1][N+1];
    ll ans=0;
    for(ll i=0;i<=N;++i)
    {
        for(ll j=0;j<=N;++j)
        {
            if(i==0 or j==0)dp[i][j]=0;
            else if(s[i-1]==q[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
                ans=max(ans,dp[i][j]);
            }
            else dp[i][j]=0;
        }
    }
    cout<< ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/