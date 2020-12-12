#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    string s;cin>>s;
    map<char,ll> M;
    ll st=0,mx=0,ans=0;
    for(ll i=0;s[i];++i)
    {
        ++M[s[i]];
        mx = max(mx,M[s[i]]);
        if((i - st +  1 - mx)>K)--M[s[st]],st++;
        ans = max(ans,i-st+1);
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/