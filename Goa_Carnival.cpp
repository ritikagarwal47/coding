#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll mn=LONG_MAX;
    ll A[N],s=0;for(ll i=0;i<N;++i)cin>>A[i],s+=A[i],mn=min(mn,A[i]);
    ll ans=0;
    ll p = K/s;
    ans += N*p;
    K -= p*s;
    //cout<<K<<'\n';
    while(K>=mn)
    {
        for(ll i=0;i<N;++i)
        {
            if(A[i]<=K)K-=A[i],++ans;
        }
    }
    cout<<ans<<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/