#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M,K,B;cin>>N>>M>>K>>B;
    ll C[N];
    ll A[N];
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];
        C[i]=A[i];
    }
    sort(C,C+N,greater<ll>());
    ll mx = C[B-1];
    //cout<<mx<<' ';
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        ll p = A[i] + M ;
        if(p>=mx)++ans;
    }
    //cout<<mx<<'\n';
    cout<<ans<<'\n' ; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/