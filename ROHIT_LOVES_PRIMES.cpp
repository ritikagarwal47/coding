#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<ll>* sieve()
{
    bool isPrime[100000+17];
    memset(isPrime,true,sizeof(isPrime));
    for(ll i=2;i*i<100009;++i)
    {
        if(isPrime[i])
        {
            for(ll j=i*i;j<100009;j+=i)
            {
                isPrime[j] =false;
            }
        }
    }
    vector<ll> *primes=new vector<ll> ();
    primes->push_back(2);
    for(ll i=3;i<100009;++i)
    {
        if(isPrime[i])
        {
            primes->push_back(i);
        }
    }
    return primes;
}
void solve(ll l,ll r,vector<ll>* &primes)
{
    bool isPrime[r-l+1];
    for(ll i=0;i<=r-l;++i)
    {
        isPrime[i]=true;
    }
    for(ll i=0;primes->at(i)*(ll)primes->at(i)<=r;++i)
    {
        ll curr= primes->at(i);
        ll base = (l/(curr))*(curr);
        if(base<l)
        {
            base+= curr;
        }
        for(ll j=base;j<=r;j+=curr)
        {
            isPrime[j-l]=false;
        }
        if(base==curr)
        {
            isPrime[base-l]=true;
        }
    }
    for(ll i=0;i<=r-l;++i)
    {
        if(isPrime[i])
        {
            if((i+l)!=1)cout<<i+l <<' ';
        }
    }
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
vector<ll>*primes = sieve();
int T=1;        cin>>T;
while(T--){
        ll N,M;cin>>N>>M;
        solve(N,M,primes);
        }exit(0);
}/*Solved By:- Ritik Agarwal*/