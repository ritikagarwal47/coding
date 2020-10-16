#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
// ll dp[100000+5];
// ll frog(ll *A,ll N)
// {
//     if(N==1)return 0;
//     if(dp[N]!=-1)return dp[N];
//     if(N>2)return dp[N] = min(abs(A[N-1] - A[N-2]) + frog(A,N-1),abs(A[N-1] - A[N-3]) + frog(A,N-2));
//     return dp[N] = abs(A[N-1] - A[N-2]) + frog(A,N-1);
// }
void solve()
{
   ll N;cin>>N;
   ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];       
   ll dp[N+1];
   dp[0] = 0; 
   dp[1] = 0;
   for(ll i=2;i<=N;++i)
   {
    if(i==2) dp[i] = abs(A[i-1] - A[i-2]) ; 
       //else if(i==2) dp[i] = abs(A[i] - A[i-1]) + dp[i-1] ; 
    else dp[i] = min( abs(A[i-1] - A[i-2]) + dp[i-1] , abs(A[i-1] - A[i-3]) + dp[i-2] ) ; 
       //cout<< dp[i] <<'\n';
   }
   cout<< dp[N] <<'\n';

//    memset(dp,-1,sizeof(dp));
//    cout<< frog(A,N) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;     //   cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/