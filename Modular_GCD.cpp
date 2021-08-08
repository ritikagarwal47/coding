#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll gcd(ll A,ll B)
{
    if(B==0)return A;
    return gcd(B,A%B);
}
ll power(ll A,ll N,ll m)
{
    ll ans=1;
    ll res=A%m;
    while(N>0)
    {
        if(N&1)
        {
            ans = ((ans%m)*(res%m))%m;--N;
        }
        else
        {
            res = ((res%m)*(res%m))%m;N/=2;
        }
    }
    return ans%m;
}
void fun(ll A,ll B,ll N)
{
    //ll A,B,N;cin>>A>>B>>N;
    ll a = pow(A,N);a%=mod;
    ll b = pow(B,N);b%=mod;
    ll g = __gcd(a+b,abs(A-B));
    cout<<g<<'\n';
}
void solve()
{
    
    ll A,B,N;cin>>A>>B>>N;
    if(A<11 and B<11 and N<11)
    {
        fun(A,B,N);return;
    }
    if(A==B)
    {
        cout<<(power(A,N,mod)+power(B,N,mod))%mod<<'\n';return;
    }
    // ll a = power(A,N);      
    // ll b = power(B,N);
    // ll p = (a%mod + b%mod)%mod;
    // cout<< gcd(p,abs(A-B))%mod<<'\n';   
    ll n = abs(A-B);
    ll ans=1;
    for(ll i=2;i*i<=n;++i)
    {
        if(n%i==0)
        {
            ll p = (power(A,N,i) + power(B,N,i))%i;
            if(!p)ans=max(ans,i);
            p = (power(A,N,n/i) + power(B,N,n/i))%(n/i);
            if(!p)ans=max(ans,n/i);
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