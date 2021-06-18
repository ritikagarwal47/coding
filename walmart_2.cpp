#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
string A[2000+5];
long long dp[2000+5][2000+5];
long fun(long N,long M)
{
    if(N<=0 and M<=0)return 0;
    if(N==0 or M==0)return 1;
    if(A[N][M]=='#')return dp[N][M]=0;
    if(dp[N][M]!=-1)return dp[N][M];
    long left=0;
    if(A[N-1][M]=='.')
    {
        if(dp[N-1][M]!=-1)left = dp[N-1][M];
        else left = fun(N-1,M);
    }
    long right=0;
    if(A[N][M-1]=='.')
    {
        if(dp[N][M-1]!=-1)right = dp[N][M-1];
        else right = fun(N,M-1);
    }
    long down=0;
    if(A[N-1][M-1]=='.')
    {
        if(dp[N-1][M-1]!=-1)down = dp[N-1][M-1];
        else down = fun(N-1,M-1);
    }
    return dp[N][M] = ((left%mod + right%mod)%mod + down%mod)%mod;
}
int main()
{
    long N,M;cin>>N>>M;
    for(long i=0;i<N;++i)cin>>A[i]; 
    for(long i=0;i<N;++i)
        for(long j=0;j<M;++j)
            dp[i][j]=-1;

    //for(long i=0;i<N;++i)cout<<A[i]<<' ';
    if(A[0][0]=='#' or A[N-1][M-1]=='#')
    {
        cout<<"0\n";
    }
    cout<< ((M*fun(N-1,M-1))-1)%mod<<'\n';
}