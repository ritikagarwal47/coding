#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll power(ll x, ll y)
{
    ll res = 1; 
 
    x = x % mod; 
  
    if (x == 0) return 0; 
 
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % mod;
 
        y = y>>1; 
        x = (x*x) % mod;
    }
    return res;
}
void solve()
{
    ll N,K;cin>>N>>K;
    ll ans=0;
    for(ll i=30;i>=0;--i)
    {
        if(K&(1<<i))
        {
            ans += power(N,i);
            
        }
        //cout<<(1<<i)<<' ';
        ans%=mod;
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/;