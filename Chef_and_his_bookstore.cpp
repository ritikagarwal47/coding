#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N,greater<ll>());
    ll ans=0;
    ll p = N%3;
    for(ll i=0;i<N-p;i+=3)
    {
        ans+=A[i] + A[i+1];
    }
    if(p==1)ans+=A[N-1];
    else if(p==2)ans+= A[N-1] + A[N-2];
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/