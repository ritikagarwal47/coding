#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;
ll max_val = 1e18 + 1LL;
// I'm in Love with Experience ^_^
vector<ll> pr;
void SieveOfEratosthenes(ll n) 
{ 
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
    for(ll p=2;p<n;++p)
    {
        ll mul = 2;
        if(!prime[p])continue;
        while(p * mul < n)
        {
            prime[p * mul] = false;mul ++;
        }
        ll m = (ll)p;
        if(m*m*m > (max_val / m))
            break;
        pr.push_back(m*m*m*m);
    }
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
SieveOfEratosthenes(100000); 
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/