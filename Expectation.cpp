#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll calculate(ll p,ll q) 
{ 
    ll expo = mod - 2; 
    while (expo) 
    { 
        if (expo & 1) 
        { 
            p = (p * q) % mod; 
        } 
        q = (q * q) % mod; 
        expo >>= 1; 
    } 
    return p; 
} 
ll power(ll x, unsigned ll y)  
{  
    ll p=mod;
    int res = 1;    
    x = x % p; 
    if (x == 0) return 0; 
    while (y > 0)  
    {  
        if (y & 1)  
            res = (res*x) % p;  

        y = y>>1;
        x = (x*x) % p;  
    }  
    return res;  
}  
void solve()
{
    ll N;cin>>N;
   // cout<<pow((ll)pow(2,N),2)-1<<' '<<(ll)pow(N,N+1)<<'\n';
    cout<< calculate(power(power(N,N),N)+1,power(N,N+1))<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/