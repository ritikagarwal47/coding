#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll x; 
    vector<ll> A;
    ll xr=0;
    for(ll i=0;i<N;++i)
    {
        cin>>x;A.push_back(x);xr^=A[i];
    }
    if(xr==0)
    {
        cout<<"YES\n";return;
    }
    ll p=0,c=0;
    for(ll i=0;i<N;++i)
    {
        p^=A[i];
        if(p==xr)p=0,++c;
    }
    if(c>=2)cout<<"YES\n";
    else cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/