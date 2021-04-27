#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll c=0,mn=A[0];
    for(ll i=1;i<N;++i)
    {
        if(A[i]<A[i-1])++c;
        mn=min(A[i],mn);
    }
    if(A[0]<A[N-1])++c;
    if(c>1)
    {
        cout<<"-1\n";return;
    }
    ll ans=0;bool ok=false;
    for(ll i=0;i<N;++i)
    {
        if(A[i]==mn and ok)
        {
            ans=max(ans,(N-i)%N);
            //cout<<;return;
        }
        if(A[i]!=mn)ok=true;
    }
    cout<<ans;

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/