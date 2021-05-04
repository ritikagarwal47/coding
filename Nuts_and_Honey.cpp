#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,H;cin>>N>>H;
    ll ans=0;
    for(ll i=N;i>=1;--i)
    {
        ll g = __gcd(i,H);
        if(g!=1)
        {
            ans=g;
            break;
        }
    }
    cout<<ans<<'\n';  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/