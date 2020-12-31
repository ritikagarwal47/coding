#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    //cout<<"128\n91\n1600\n505\n0\n1\n502811676\n264880351";
    ll N;cin>>N;
    ll A[N]; 
    ll bit[60]={0};
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];
        for(ll j=0;j<60;++j)
        {
            if(A[i]&(1LL<<j))bit[j]++;
        }
    }
    ll ans=0;
    
    for(ll i=0;i<N;++i)
    {
        ll a=0,b=0;
        for(ll j=0;j<60;++j)
        {
            if((1LL << j) & A[i])a = (a + N*((1LL<<j)%mod))%mod;
            else a = (a+ (bit[j] * ((1LL << j) % mod)))%mod;
        }
        for(ll j=0;j<60;++j)
        {
            if((1LL << j) & A[i])b = ( b + (bit[j] * ((1LL << j) % mod)))%mod;
        }
        ans += (a*b)%mod;
        ans%=mod;
    }
    // for(ll i=0;i<N;++i)
    // {
    //     for(ll j=0;j<N;++j)
    //     {
    //         for(ll k=0;k<N;++k)
    //         {
    //             ans = (ans + ((A[i]%mod&A[j]%mod)*(A[j]%mod|A[k]%mod))%mod)%mod;
    //         }
    //     }
    // }

    cout<< ans%mod <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/