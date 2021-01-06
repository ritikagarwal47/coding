#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll N;
ll dp[4000+4][4];
ll fun(ll *A,ll *B,ll *C,ll i,ll mx)
{
    if(i==0)return 0;
    if(A[i]<=mx and B[i]<=mx)
    {
        cout<<mx<<" 1\n";
        if(dp[i][1]!=0 and dp[i][0]!=0) return min(dp[i][1],dp[i][0]);
        return dp[i][1] = dp[i][0] = min(fun(A,B,C,i-1,A[i]), C[i] + fun(A,B,C,i-1,B[i]));
    }
    if(A[i]<=mx)
    {
        cout<<mx<<" 01\n";
        if(dp[i][1]) return dp[i][1];
        return dp[i][1] = fun(A,B,C,i-1,A[i]) ;
    } 
    if(B[i]<=mx) 
    {
        cout<<mx<<" 001\n";
        if(dp[i][0]) return dp[i][0];
        return dp[i][0] = fun(A,B,C,i-1,B[i]) + C[i] ;
    }
    return -1;
}
void solve()
{
    cin>>N;
    ll A[N+1]; for(ll i=1;i<=N;++i)cin>>A[i];
    ll B[N+1]; for(ll i=1;i<=N;++i)cin>>B[i];
    ll C[N+1]; for(ll i=1;i<=N;++i)cin>>C[i];
    memset(dp,0,sizeof(dp));
    cout<< fun(A,B,C,N,LLONG_MAX) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/