#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool isPrime(ll n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 or n % 3 == 0) 
        return false; 
  
    for (ll i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 or  n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 
void solve()
{
    ll N;cin>>N;
    if(isPrime(N) or N==1)
    {
        cout<< N + 1 <<'\n';return;
    }

    if(N==4)
    {
        cout<<"4\n";return;
    }
    // ///ll x=1;
    ll mn=LONG_LONG_MAX;
    // for(ll i=1;i<=N;++i)
    // {
    //     if(N%i==0)
    //     {
    //         ll x = N/i;
    //         if(i>=x)
    //         {
    //             mn = min(mn,i+x);
    //             break;
    //         }
    //         mn = min(mn,i+x);
    //     }
    // }
    for(ll i=1;i*i<=N;++i)
    {
        if(N%i==0)
        {
            ll x= N/i;
            if(i!=x)mn = min(mn,i + N/i);
        }
    }
    cout<< mn <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/