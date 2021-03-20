#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll s=0;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N);
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        s+=A[i];
        if(s>K)break;
        ++ans;
    } 
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(ll i=1;i<=T;++i)
{
    cout<<"Case #"<<i<<": ";
    solve();
    }
    exit(0);
}/*Solved By:- Ritik Agarwal*/