#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll dp[100000+5][100+5];
ll frog(ll *A,ll K,ll N)
{
    if(N==1)return 0;
    if(dp[N][K]!=-1)return dp[N][K];
    for(ll i=0;i<K;++i)
    {
        
    }
}
void solve()
{
   ll N,K;cin>>N;
   memset(dp,-1,sizeof(dp));
   ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
   cout<< frog(A,K,N) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;      //  cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/