#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    if(N==1)
    {
        cout<<A[0]<<'\n';return;
    }
    ll ans=A[0]+A[N-1];
    for(ll i=1;i<N;++i)
    {
        ans+=abs(A[i]-A[i-1]);
    }
    ans-= max(0LL,A[0]-A[1]);
    ans-= max(0LL,A[N-1]-A[N-2]);
    for(ll i=1;i<N-1;++i)
    {
        ans-=max(0LL,A[i]-max(A[i-1],A[i+1]));
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/
