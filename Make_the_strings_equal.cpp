#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    string s1,s2;cin>>s1>>s2;
    map<char,ll> M1,M2;
    for(ll i=0;i<N;++i)++M1[s1[i]];
    for(ll i=0;i<N;++i)++M2[s2[i]];
    if(M1!=M2)
    {
        cout<<"NO\n";return;
    }
    ll c=0;
    for(ll i=0;i<N;++i)
    {
        if(s1[i]!=s2[i])++c;
    }
    if(c&1)cout<<"NO\n";
    else cout<<"YES\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/