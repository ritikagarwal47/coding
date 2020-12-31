#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void fun(ll i,ll *d,ll *s)
{
    if(d[i]!=1)return;
    cout<< i << ' ' << s[i] <<'\n';
    s[s[i]] ^=i;
    d[s[i]]--;d[i]--;fun(s[i],d,s);
}
void solve()
{
    ll N;cin>>N;
    ll d[N],s[N];
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        cin>>d[i]>>s[i];
        ans+=d[i];
    }
    cout<< ans/2 <<'\n';
    for(ll i=0;i<N;++i)fun(i,d,s);
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/