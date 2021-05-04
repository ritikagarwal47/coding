#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<ll> primes;
void SieveOfEratosthenes(ll n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (ll p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (ll i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
  
    // Print all prime numbers 
    for (ll p=2; p<=n; p++) 
       if (prime[p]) 
       {
           primes.push_back(p);
       }
} 
void solve()
{
    ll N;cin>>N;
    //for(auto i : primes)cout<<i<<' ';cout<<'\n';
    if(N==1)cout<<"6\n";
    else if(N==2)cout<<"15\n";
    else
    {
        ll p = upper_bound(primes.begin(),primes.end(),N) - primes.begin();
        ll r = upper_bound(primes.begin(),primes.end(),primes[p]+N) - primes.begin();
        cout<< primes[p] <<' '<< primes[r]<<'\n';
        cout<< primes[p]*primes[r] <<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
SieveOfEratosthenes(1000000);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/