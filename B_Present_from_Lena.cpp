#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    for(ll i=0;i<=N;++i)
    {
        ll a=0;
        for(ll j=0;j<N-i;++j)cout<<"  ";
        for(ll j=0;j<i;++j)cout<<j<<' ';
        cout<<i;
        for(ll j=i-1;j>=0;--j)cout<<' '<<j;
        cout<<'\n';
    }
    for(ll i=N-1;i>=0;--i)
    {
        ll a=0;
        for(ll j=0;j<N-i;++j)cout<<"  ";
        for(ll j=0;j<i;++j)cout<<j<<' ';
        cout<<i;
        for(ll j=i-1;j>=0;--j)cout<<' '<<j;
        cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/