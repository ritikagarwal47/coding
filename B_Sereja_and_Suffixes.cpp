#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    map<ll,ll> Mp;
    ll ans[N];
    for(ll i=N-1;i>=0;--i)
    {
        Mp[A[i]]++;
        ans[i]  = Mp.size();
    }
    while(M--)
    {
        ll x;cin>>x;
        cout<<ans[x-1]<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/