#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll decToBinary(ll n) 
{ 
    ll ans=0;
    for (ll i = 31; i >= 0; i--) { 
        ans*=10;
        ll k = n >> i; 
        if (k & 1) ans++;
    } 
    return ans;
} 
bool check(string s){
    for(ll i=0;i<s.length()-1;i++)if(s[i]=='1' and s[i]==s[i+1]) return false;
    return true;
}
ll dp[100000+5];
void pre()
{
    for(ll i=0;i<=100000;++i)
    {
        ll p = decToBinary(i);
        string s = to_string(p);        
        if(check(s))dp[i] = i;
        else dp[i] = dp[i-1];
    }
}
void solve()
{
    ll N;cin>>N;
    cout<< dp[N] <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/