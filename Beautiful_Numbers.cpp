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
void solve()
{
    ll N;cin>>N;
    ll p = decToBinary(N);
    string s = to_string(p);
    //cout<<s<<'\n';
    ll l = s.size();
    //cout<<l<<'\n';
    ll ans=0;
    ll a=1;
    reverse(s.begin(),s.end());
    for(ll i=0;i<l-1;++i)
    {
        if(s[i]=='1' and s[i+1]=='1')ans += i+1,s[i+1]='0';
        //++a;
    }
    //cout<< ans<<'\n';
    cout<< N - ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/