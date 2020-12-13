#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll a=N;
    for(ll i=0;i<=N;++i)
    {
        for(ll j=0;j<=N;++j)
        {
            if(j<a)cout<<' ';
            else cout<<j;
        }
        --a;cout<<'\n';
    }
    ++a;
    for(ll i=1;i<=N;++i)
    {
        for(ll j=0;j<=N;++j)
        {
            if(j>a)cout<<j;
            else cout<<' ';
        }
        ++a;cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/