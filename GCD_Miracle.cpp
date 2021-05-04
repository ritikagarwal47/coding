#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
#define MAX 1000000
// I'm in Love with Experience ^_^
ll prime[MAX], countdiv[MAX]; 
void SieveOfEratosthenes() 
{ 
    for (ll i = 2; i * i <= MAX; ++i) 
    { 
        if (!prime[i]) 
            for (ll j = i * 2; j <= MAX; j += i) 
                prime[j] = i; 
    } 
    for (ll i = 1; i < MAX; ++i) 
        if (!prime[i]) 
            prime[i] = i; 
} 
void solve()
{
    ll N;cin>>N;
    ll A[N]; 
    ll mn = LLONG_MAX;
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];
        if(A[i]>1)mn=min(mn,A[i]);
    }
    ll ans = 0; 
    for (ll i=0; i < N; ++i) 
    { 
        ll element = A[i]; 
        while (element > 1) 
        { 
            ll div = prime[element]; 
            ++countdiv[div]; 
            ans = max(ans, countdiv[div]);   
            while (element % div==0) 
                element /= div; 
        } 
    } //for(auto i: countdiv)cout<<i<<' ';
    cout<<ans<<' '<< mn;//*min_element(A,A+N); //<<mx1<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
SieveOfEratosthenes(); 
int T=1;     //   cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/