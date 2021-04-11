#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll M,N,K;cin>>M>>N>>K;
    ll A[M];for(ll i=0;i<M;++i)cin>>A[i];sort(A,A+M);
    ll ans=0;
    for(ll i=0;i<K;++i)ans+= (N-A[i]);
    for(ll i=K;i<M;++i)ans+= A[i];
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/