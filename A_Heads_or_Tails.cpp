#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll x,y,a,b;cin>>x>>y>>a>>b;
    ll ans=0;
    for(ll i=a;i<=x;++i)
        for(ll j=b;j<=y;++j)
            if(i>j)++ans;
    cout<< ans <<'\n';
    for(ll i=a;i<=x;++i)
        for(ll j=b;j<=y;++j)
            if(i>j)cout<<i<<' '<<j<<'\n';
}

int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/