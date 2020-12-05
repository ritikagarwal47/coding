#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll dp[N][3]={0};
    if(A[0]==1 or A[0]==3)++dp[0][1];
    if(A[0]==2 or A[0]==3)++dp[0][2];
    for(ll i=1;i<N;++i)
    {
        dp[i][0]= max(dp[i-1][0],max(dp[i-1][1],dp[i-1][2]));
        if(A[i]==1 or A[i]==3)dp[i][1] = max(dp[i-1][0],dp[i-1][2]) + 1 ;
        if(A[i]==2 or A[i]==3)dp[i][2] = max(dp[i-1][1],dp[i-1][0]) + 1 ;
    }
    cout<< N - max(dp[N-1][0],max(dp[N-1][1],dp[N-1][2])) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/