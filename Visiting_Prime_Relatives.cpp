#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool prime(ll n)
{
    if (n <= 1)return false;
    if (n <= 3)return true;
    if (n % 2 == 0 || n % 3 == 0)return false;  
    for (ll i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 or n % (i + 2) == 0)return false;
    }
    return true;
}
void solve()
{
    ll l,r;cin>>l>>r;
    ll N;cin>>N;
    ll ans=-1,mx=0;
    for(ll j=1;j<=N;++j)
    {
        ll c=0;
        ll a,b;cin>>a>>b;
        for(ll i=max(a,l);i<=min(b,r);++i)
        {
            if(prime(i))++c;
        }
        if(c>mx)
        {
            mx=c;ans=j;
        }
    }  
    // if(!ans)cout<<"-1\n";
    // else 
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/