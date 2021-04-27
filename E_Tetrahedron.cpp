#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll power(ll x,ll y,ll p)
{
    ll res = 1;    
    x = x % p; 
    if (x == 0) return 0; 
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
 
        y = y>>1; 
        x = (x*x) % p;
    }
    return res;
}
void solve()
{
    ll N;cin>>N;
    ll ans = power(3,N,mod);
    if(N&1)ans-=3;
    else ans+=3;
    ans%=mod;
    //ans/=4;
    ll p = power(4,mod-2,mod);
    cout<<(ans*p)%mod<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/