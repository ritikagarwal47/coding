#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll a=1;
    for(ll i=0;i<K-(N-K)-1;++i)
    {
        cout<<a<<' ';++a;
    }
    a=K;
    for(ll i=K-(N-K);i<K+1;++i)
    {
        cout<<a<<' ';--a;
    }
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/