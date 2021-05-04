#include<bits/stdc++.h>
#define ll long long int
//#define MAX 500
using namespace std;

const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll fact(ll n)
{   
    ll f = 1; 
    for (ll i = 1; i <= n; i++)
    {
        f = ((f %mod)* (i%mod))%mod; 
    }
    return f % mod;
}
ll nCr(ll n, ll r) 
{ 
    return (fact(n) / ((fact(r) * fact(n - r))%mod))%mod; 
} 
void solve()
{ 
    ll n,x,pos;
    cin>>n>>x>>pos;
    cout<<fact(n - x%pos)<<'\n';
    }
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;     //   cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/