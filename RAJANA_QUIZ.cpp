#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    map<ll,ll> M;
    for(ll i=0;i<N;++i)
    {
        ll x,y,z;cin>>x>>y>>z;
        ++M[x],++M[y],++M[z];
    }
    ll c=0;
    for(auto i : M)
    {
        if(i.second==1)++c;
    }
    cout<<c<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/