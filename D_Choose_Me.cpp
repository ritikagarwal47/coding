#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    //ll ans=0;
    ll a=0;
    ll C[N];
    for(ll i=0;i<N;++i)
    {
        ll x,y;cin>>x>>y;
        a+=x;C[i] = 2*x + y; 
    }
    sort(C,C+N,greater<ll>());
    ll ans=0;
    while(a>=0)a-=C[ans++];
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/