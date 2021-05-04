#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll mx=0;
    ll X=0;
    ll l=1;
    for(ll i=2;i<=N;++i)
    {
        l = (((i * l)) / (__gcd(i,l)));  
    }
    for(ll i=1;i<=N;++i)
    {
        mx+= __gcd(i,l);
    }
    cout<<mx<<' '<<l<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/