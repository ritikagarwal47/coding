#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N+1],B[N+1],C[N+1],D[N+1];
    for(ll i=1;i<=N;++i)cin>>A[i];
    for(ll i=1;i<=N;++i)cin>>B[i];
    for(ll i=1;i<=N;++i)cin>>C[i];
    ll ans=0;map<ll,ll> M;
    for(ll i=1;i<=N;++i)
    {
        D[i]=B[C[i]];M[D[i]]++;
    }
    for(ll i=1;i<=N;++i)ans+=M[A[i]];
    cout<<ans; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/