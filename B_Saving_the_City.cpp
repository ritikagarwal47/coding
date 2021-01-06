#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll a,b;cin>>a>>b;
    string s;cin>>s;
    ll x = INT_MAX;
    ll ans=0;
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='1')
        {
            ans += min(a,x*b);x=0;
        }
        else ++x;
    }
    //ans += min(a,x*b);
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/