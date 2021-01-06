#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll countSetBits(ll n) 
{  
    if (n == 0) 
        return 0; 
    else
        return 1 + countSetBits(n & (n - 1)); 
} 
void solve()
{
    ll N;cin>>N;
    cout<<"Tanmay\n";
    // if(__builtin_popcount(N)&1)cout<<"Tanmay\n";
    // else cout<<"Kush\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/