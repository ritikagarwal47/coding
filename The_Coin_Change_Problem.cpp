#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll M,N;cin>>M>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll dp[N+5][M+5];
    for(ll i=1;i<=M;++i)dp[0][i]=0;
    for(ll i=0;i<=N;++i)dp[i][0]=1;
    for(ll i=1;i<=N;++i)
    {
        for(ll j=1;j<=M;++j)
        {
            if(A[i-1]<=j)dp[i][j] = dp[i-1][j]+dp[i][j-A[i-1]];
            else dp[i][j] = dp[i-1][j];
        }
    }
    cout<< dp[N][M] <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/