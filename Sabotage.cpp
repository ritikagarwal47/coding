#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
vector<ll> pr;
void SieveOfEratosthenes(ll n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (ll p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (ll i=p*p; i<=n; i += p) prime[i] = false; 
        } 
    } 
    for (ll p=2; p<=n; p++) 
       if (prime[p]) pr.push_back((ll)pow(p,4));
} 
void solve()
{
    ll N;cin>>N;
    ll ans= upper_bound(pr.begin(),pr.end(),N) - pr.begin();
    //cout<< pr.size()<<'\n';
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
SieveOfEratosthenes(9000); 
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/