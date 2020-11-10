#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll A,B,C,D;cin>>A>>B>>C>>D;
    ll ans=0;
    for(ll i=A;i<=B;++i)
    {
        ans +=(ll) log2(i) + 1;
        cout<< ans<<'\n';
    }
    cout<< ans*(D-C+1)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/