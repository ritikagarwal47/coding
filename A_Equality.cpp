#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[27]={0};
    string s;cin>>s;
    for(ll i=0;s[i];++i)
    {
        ++A[s[i]-'A'];
    }
    ll ans=0;
    ll mn=LONG_MAX;
    for(ll i=0;i<K;++i)
    {
        mn = min(mn,A[i]);
    }
    cout<< K*mn <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/