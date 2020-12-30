#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    map<char,ll> M;
    for(ll i=0;s[i];++i)++M[s[i]];
    string ans="";
    for(auto i : M)
    {
        if(i.second%N)
        {
            cout<<"-1\n";return;
        }
        else
        {
            ll d = i.second/N;
            for(ll j=0;j<d;++j)ans +=i.first;
        }
    }
    for(ll i=0;i<N;++i)cout<<ans;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/