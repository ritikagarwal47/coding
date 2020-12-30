#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll K,P;cin>>K>>P;
    ll ans=0;
    for(ll i=1;i<=K;++i)
    {
        string s = to_string(i);
        string str = s ;
        reverse(s.begin(),s.end());
        //cout<<s<<' '<<i<<'\n';
        ans = (ans%P + stoll( str + s )%P)%P;
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/