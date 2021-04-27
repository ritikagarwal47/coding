#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[5000+3][5000+3];
void solve()
{
    ll N,M,K;cin>>N>>M>>K;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    //sort(A,A+N);
    ll pre[N+1];pre[0]=0;
    for(ll i=1;i<=N;++i)
    {
        pre[i] = pre[i-1] + A[i-1];
    }
    for(ll i=1;i<=K;++i)
    {
        for(ll j=M*i;j<=N;++j)
        {
            dp[i][j] = max(dp[i][j-1],(pre[j]-pre[j-M]) + dp[i-1][j-M]);
        }
    }
    cout<<dp[K][N]<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/