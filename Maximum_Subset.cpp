#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll ans=0;
    bool ok=false;ll mn = LONG_LONG_MIN;
    for(ll i=0;i<N;++i)
    {
        ll x;cin>>x;
        if(x>=0)
        {
            ans+=x;ok=true;
        }
        else
        {
            mn = max(mn,x);
        }
    } 

    if(ok)cout<<ans<<'\n';
    else cout<<mn<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/