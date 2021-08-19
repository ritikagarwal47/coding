#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll mulmod(ll a, ll b,ll c)
{
    ll x = 0,y=a%c;
    while(b > 0)
    {
        if(b%2 == 1)
        {
            x = (x+y)%c;
        }
        y = (y*2LL)%c;
        b /= 2;
    }
    return x%c;
}
ll power(ll a, ll n,ll m)
{
    ll res =1;
    while(n)
    {
        if(n&1)
        {
            res = mulmod(res , a , m);
            --n;
        }
        else
        {
            a = mulmod(a , a , m);
            n/=2;
        }
    }
    return res;
}
bool fun(ll N)
{
    if(N<=4)return N==2 or N==3;
    for(ll i=1;i<=5;++i)
    {
        ll a = 2 + rand()%(N-3);
        ll res = power(a,N-1,N);
        if(res!=1)return false;
    }
    return true;
}
void solve()
{
    ll N;cin>>N;
    fun(N)?cout<<"YES\n":cout<<"NO\n";  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/