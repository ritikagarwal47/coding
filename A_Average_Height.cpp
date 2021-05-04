#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    vector<ll> e,o;
    ll x;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        if(x&1)o.push_back(x);
        else e.push_back(x);
    } 
    for(auto i:o)cout<<i<<' ';
    for(auto i:e)cout<<i<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/