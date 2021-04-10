#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
#define MAXN   100001
  
// stores smallest prime factor for every number
ll spf[MAXN];
  
// Calculating SPF (Smallest Prime Factor) for every
// number till MAXN.
// Time Complexity : O(nloglogn)
void sieve()
{
    spf[1] = 1;
    for (ll i=2; i<MAXN; i++)
  
        // marking smallest prime factor for every
        // number to be itself.
        spf[i] = i;
  
    // separately marking spf for every even
    // number as 2
    for (ll i=4; i<MAXN; i+=2)
        spf[i] = 2;
  
    for (ll i=3; i*i<MAXN; i++)
    {
        // checking if i is prime
        if (spf[i] == i)
        {
            // marking SPF for all numbers divisible by i
            for (ll j=i*i; j<MAXN; j+=i)
  
                // marking spf[j] if it is not 
                // previously marked
                if (spf[j]==j)
                    spf[j] = i;
        }
    }
}
  
// A O(log n) function returning primefactorization
// by dividing by smallest prime factor at every step
vector<ll> getFactorization(ll x)
{
    vector<ll> ret;
    while (x != 1)
    {
        ret.push_back(spf[x]);
        x = x / spf[x];
    }
    return ret;
}
ll dp[10000000+1];
void pre()
{
    //memset(dp,-1,sizeof(dp));
    for(ll i=1;i<=500000;++i)
    {
        ll c = 0;// properDivisorSum(i);
        //cout<<c<<'\n';
        if(i==500000)cout<<c<<'\n';
        dp[c]=i;
    }
}
void solve()
{
    ll X;cin>>X;
    if(!dp[X])cout<< dp[X] <<'\n';    
    else cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/