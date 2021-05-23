#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
// void pre()
// {

// }
void solve()
{
    ll l=1,r=1;
    ll c=1;
    ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    for(ll i=1;i<x1;++i)
    {
        //cout<<(i+1)<<' ';
        c = c + i + 1;
        //cout<<c<<'\n';
    }
    for(ll i=1;i<y1;++i)
    {
        //cout<<(i+x1-1)<<' ';
        c = c + x1 + i-1;
        //cout<<c<<'\n';
    }
    //cout<<c<<' ';
    ll ans=0;
    for(ll i=x1;i<x2;++i)
    {
        ans+=c;//cout<<c<<' ';
        c = c + i + y1;
        
    }
    for(ll i=y1;i<=y2;++i)
    {
        ans+=c;//cout<<c<<' ';
        c = c + x2 + i-1;
        
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/