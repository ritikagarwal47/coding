#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=998244353;
//The end result of coders personal growth is,there codes becomes there documentation
ll calculate(ll a,ll b)
{
    ll expo=mod-2;
    while(expo)
    {
        if(expo&1)
        {
            a = (a*b)%mod;
        }
        b = (b*b)%mod;
        expo/=2;
    }
    return a;
}
ll power(ll x,ll y) 
{ 
    if(y==0)return 1;
    if(y==1)return x;
    if(y&1)return (power(x,y-1)*x)%mod;
    ll p = power(x,y/2);
    return (p*p)%mod;
} 
ll nCr(ll n, ll k) 
{ 
    ll res = 1; 
    if (k > n - k) k = n - k; 
    for (ll i = 0; i < k; ++i) 
    { 
        res *= (n - i); 
        res /= (i + 1); 
    }   
    return res; 
} 
void solve()
{
    ll M,N,K;cin>>M>>N>>K;
    //ll x = power(K,N,mod)%mod;
    ll dp[N+1];
    memset(dp,0,sizeof(dp));
    dp[1] = K ;
    for(ll i=2;i<=N;++i)
    {
        dp[i] += dp[i-1]%mod;dp[i] %=mod;
        dp[i] += ((K-1)*(dp[i-1] +  (power(K,i-1))))%mod;dp[i] %=mod;
    }
    ll x = power(K,N);
    ll p = power(x,mod-2); 
    cout<< (dp[N]*p)%mod <<'\n';
    //cout<< calculate((ll)pow(K,N),(ll)pow(K,N)) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/