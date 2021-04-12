#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M,K;cin>>N>>M>>K;
    ll A[N+1][M+1];
    for(ll i=1;i<=N;++i)
    {
        for(ll j=1;j<=M;++j)cin>>A[i][j];
    } 
    //ll pre[N+1][M+1];
    //for(ll i=0;i<=N;++i)pre[i][0]=0;
    //for(ll i=0;i<=M;++i)pre[0][i]=0;
    //for(ll )
    for(ll i=0;i<=N;++i)A[i][0]=0;
    for(ll i=0;i<=M;++i)A[0][i]=0;
    for(ll i=1;i<=N;++i) 
    {
        for(ll j=1;j<=M;++j)A[i][j] += A[i][j-1];
    }
    for(ll i=1;i<=N;++i) 
    {
        for(ll j=1;j<=M;++j)A[i][j] += A[i-1][j];
    }
    ll  ans = 0;
    for(ll k =1;k<=N;++k)
    {
        for(ll i=1;i<=N-k+1;++i)
        {
            ll low= 1,high=M-k+1 ,p,ok =0;
            while(low<=high)
            {
                ll mid = (high+low)/2;
                ll sum =A[i+k-1][mid+k-1]-A[i+k-1][mid-1]-A[i-1][mid+k-1]+A[i-1][mid-1];
                if(sum >=K*k*k)
                {
                    high = mid-1;p=mid;ok=1;
                }
                else low=mid+1;
            }
            if(ok)ans+=(M-k-p+2);
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/