#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<ll> primes;
bool prime[1000000 + 5];
void SieveOfEratosthenes(ll n)
{
    memset(prime, true, sizeof(prime));
    primes.push_back(1);
    for (ll p = 2; p * p <= 1000000 + 5; p++)
    {
        if (prime[p] == true) 
        {
            for (ll i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (ll p = 2; p <= n; p++)
        if (prime[p])primes.push_back((p));
}
void solve()
{
    SieveOfEratosthenes(1000000 + 5);
    //for(auto i : primes)cout<<i<<' ';
    ll N;cin>>N;
    while(N--)
    {
        ll a,b;cin>>a>>b;
        ll p , q;
        if(prime[a])p=a;
        else 
        {
            p = upper_bound(primes.begin(),primes.end(),a) - primes.begin();
            p = primes[p];
        }

        if(prime[b])q=b;
        else
        {
            q = lower_bound(primes.begin(),primes.end(),b) - primes.begin() - 1;
            q = primes[q];
        }
        
        //cout<<p<<' '<<q<<'\n';
        if(p>q)cout<<"-1\n";
        else cout<< abs(p-q) <<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/