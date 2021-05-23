#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    if(K==N)
    {
        cout<<"0\n";return;
    } 
    ll ans=0;
    for(ll i=0;i<K;++i)
    {
        ll j=i;
        map<ll,ll> M;
        ll mx=0;ll c=0;
        while(j<N)
        {
            ++M[A[j]];//++c;
            mx=max(mx,M[A[j]]);
            j+=K;++c;
            //cout<<ans<<'\n';
        }
        ans+= c-mx;//cout<<ans<<'\n';
    } 
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/