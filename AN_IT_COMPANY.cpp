#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
     ll N,M,K;cin>>N>>M>>K;
     map <ll,ll> m;
     ll x;
     for(ll i=0;i<N;++i)
     {
         cin>>x;m[x]++;
     } 
     ll ans=0;
     for(auto i :m)
     {
         if(i.second>K)
         {
             ans += i.second - K ;
         }
     }
     cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/