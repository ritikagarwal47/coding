#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,Q;cin>>N>>Q;
    ll A[N+1]={0}; for(ll i=1;i<=N;++i)cin>>A[i];
    for(ll i=N;i>=1;--i)A[i]-=A[i-1];
    ll B[N+1]={0};
    for(ll i=0;i<Q;++i)
    {
        ll x,y,z;cin>>x>>y>>z;
        for(ll j=x;j<=y;++j)
        {
            B[j]+=z;
        }
    }
    //for(ll i=1;i<=N;++i)cout<<A[i]<<' ';
    for(ll i=1;i<=N;++i)A[i]-=B[i];
    for(ll i=1;i<=N;++i)cout<<A[i]<<' ';
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/