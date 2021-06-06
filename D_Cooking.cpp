#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;ll s=0;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i],s+=A[i];
    ll dp[N+1][s+1];
    for(ll i=0;i<=N;++i)dp[i][0]=1;
    for(ll i=0;i<=s;++i)dp[0][i] = false;
    for(ll i=1;i<=N;++i)
    {
        for(ll j=1;j<=s;++j)
        {
            dp[i][j] = dp[i-1][j];
            if (A[i-1] <= j)dp[i][j] |= dp[i-1][j-A[i-1]];
        }
    }
    //cout<<s<<'\n';
    for(ll j=s/2;j>=0;--j)
    {
        if(dp[N][j])
        {
            //cout<<j<<' ';
            cout<< max(j,s-j);return;
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/