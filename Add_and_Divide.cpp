#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll mod=1e18+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
void solve()
{
    ll a,b;cin>>a>>b;
    if(a==1)
    {
        cout<<"YES\n";return;
    }
    if(b==1)
    {
        cout<<"NO\n";return;
    }
    ll p = b%a;
    ll x= p;
    map<ll,ll> M;
    for(ll i=0;i<60;++i)
    {
        ll n = lcm(a,b);
        ll v = n/b;
        a = v;

        if(v==1)
        {
            cout<<"YES\n";return;
        }
        if(M[v]>0)break;
        M[v]++;
    }
    cout<<"NO\n";return;
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/