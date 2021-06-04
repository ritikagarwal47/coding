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
    for(ll i=0;i<N;++i)
    {
        for(ll j=i+1;j<N;++j)
        {
            if(i==j)continue;
            ll g = __gcd(A[i],2*A[j]);
            ll g1 = __gcd(2*A[i],A[j]);
            if(g>1)++ans;
            else if(g1>1)++ans;
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